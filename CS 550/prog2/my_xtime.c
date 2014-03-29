asmlinkage int my_xtime(struct timespec *current_time)
{
   if(!access_ok(VERIFY_WRITE, current_time, sizeof(struct timespec)))
	return -EFAULT;

   copy_to_user(current_time, &timekeeper.xtime, sizeof(struct timespec));
   return 0;
}
EXPORT_SYMBOL(my_xtime);
