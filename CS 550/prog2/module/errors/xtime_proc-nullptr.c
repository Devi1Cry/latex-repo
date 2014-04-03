#include <linux/module.h>
#include <linux/proc_fs.h>
#include <linux/seq_file.h>
#include <linux/time.h>

static int xtime_proc_show(struct seq_file *m, void *v) {
  struct timespec now;
  getnstimeofday(&now);
  seq_printf(m, "%ld %ld\n", now.tv_sec, now.tv_nsec);
  return 0;
}

static int xtime_proc_open(struct inode *inode, struct  file *file) {
  return single_open(file, xtime_proc_show, NULL);
}

static const struct file_operations proc_fops = {
  .owner = THIS_MODULE,
  .open = xtime_proc_open,
  .read = seq_read,
  .llseek = seq_lseek,
  .release = single_release,
};

static int __init xtime_proc_init(void) {
  proc_create("myxtime", 0, NULL, &proc_fops);
  int* ptr = NULL;
  int ref = *ptr;
  return 0;
}

static void __exit xtime_proc_exit(void) {
  remove_proc_entry("myxtime", NULL);
}

MODULE_LICENSE("GPL");
module_init(xtime_proc_init);
module_exit(xtime_proc_exit);

