/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00658df0; name: FUN_00658df0
 */


void FUN_00658df0(long *param_1)

{
  undefined *puVar1;
  long *plVar2;
  
  puVar1 = PTR_DAT_02714b78 + 0xd8;
  *param_1 = (long)(PTR_DAT_02714b78 + 0x10);
  param_1[1] = (long)puVar1;
  if (((int)param_1[0x24] != -1) && (param_1[4] != 0)) {
    FUN_005fb3a0();
    *(undefined4 *)(param_1 + 0x24) = 0xffffffff;
  }
  if (*(char *)((long)param_1 + 0x124) != '\0') {
    (**(code **)PTR_DAT_02714b80)(param_1 + 0x18);
    param_1[0x22] = 0;
    param_1[0x23] = 0;
    *(undefined1 *)((long)param_1 + 0x124) = 0;
    param_1[0x20] = 0;
    param_1[0x21] = 0;
    param_1[0x1e] = 0;
    param_1[0x1f] = 0;
    param_1[0x1c] = 0;
    param_1[0x1d] = 0;
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    param_1[0x18] = 0;
    param_1[0x19] = 0;
  }
  if (param_1[5] != 0) {
    FUN_005f96f0(param_1[4],param_1);
    param_1[5] = 0;
  }
  if ((*(byte *)(param_1 + 0xb) & 1) == 0) {
    if (param_1[7] != 0) {
      plVar2 = (long *)param_1[6];
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x48))
                  (plVar2,param_1[7],"../../../../Include\\SiCore/SiCore_String.inl",0xe1);
      }
      param_1[7] = 0;
    }
    param_1[7] = 0;
  }
  FUN_005bf750(param_1 + 2);
  return;
}


