/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f4e560; name: FUN_00f4e560
 */


int FUN_00f4e560(long *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  undefined1 auStack_1c0 [8];
  undefined8 local_1b8;
  long local_1a8;
  undefined1 auStack_100 [64];
  undefined1 auStack_c0 [128];
  
  lVar2 = *param_1;
  if (*param_1 == 0) {
    *param_1 = param_2;
    lVar2 = param_2;
  }
  snprintf((char *)(param_1 + 1),0x41,"%lu",*(undefined8 *)(lVar2 + 0x1a0));
  FUN_00e61170(auStack_1c0,*param_1);
  snprintf((char *)((long)param_1 + 0x49),0x41,"%s",local_1b8);
  if (local_1a8 != 0) {
    (**(code **)(*(long *)(local_1a8 + 0x48) + 0x18))();
    local_1a8 = 0;
  }
  memcpy(auStack_1c0,(void *)(*param_1 + 0x900),0x180);
  snprintf((char *)((long)param_1 + 0x8a),0x41,"%s",auStack_100);
  memcpy(auStack_1c0,(void *)(*param_1 + 0x900),0x180);
  iVar1 = snprintf((char *)((long)param_1 + 0xcb),0x41,"%s",auStack_c0);
  return iVar1;
}


