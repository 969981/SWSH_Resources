/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00801420; name: FUN_00801420
 */


void FUN_00801420(undefined8 *param_1)

{
  int __errnum;
  undefined4 local_50 [2];
  char *local_48;
  undefined4 local_40;
  ulong local_38 [2];
  void *local_28;
  
  __errnum = pthread_mutex_lock((pthread_mutex_t *)*param_1);
  if (__errnum != 0) {
    local_38[0] = 0;
    local_48 = 
    "C:/jenkins/workspace/rigel/rom/RomBuild/program/lib/gflnet3/external/include/google/protobuf/stubs/common.cc"
    ;
    local_50[0] = 3;
    local_40 = 0x170;
    local_38[1] = 0;
    local_28 = (void *)0x0;
    std::string::append((char *)local_38);
    strerror(__errnum);
    std::string::append((char *)local_38);
    FUN_008012b0(local_50);
    if ((local_38[0] & 1) != 0) {
      operator_delete(local_28);
    }
  }
  return;
}


