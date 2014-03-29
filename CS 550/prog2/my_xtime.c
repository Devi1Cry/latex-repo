asmlinkage int my_xtime(struct timespec *current_time)
{
        struct timespec now;
        int ret = 0;
        //if(!access_ok(VERIFY_WRITE, current_time, sizeof(now)))
        //      return -EFAULT;
        getnstimeofday(&now);
        ret = copy_to_user(current_time, &now, sizeof(now));
        printk(KERN_ALERT "It is now %ld nanoseconds.\n", now.tv_nsec);
        return ret;
}
EXPORT_SYMBOL(my_xtime);

