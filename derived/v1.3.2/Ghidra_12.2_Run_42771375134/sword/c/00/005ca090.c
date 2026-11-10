/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005ca090; name: FUN_005ca090
 */


void FUN_005ca090(long param_1,char *param_2,undefined8 *param_3)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  size_t __n;
  undefined8 local_1050;
  undefined8 uStack_1048;
  undefined8 local_1040;
  undefined8 uStack_1038;
  char acStack_1030 [4096];
  
  lVar4 = FUN_005bc740();
  if (lVar4 == 0) {
    FUN_005bc6f0();
  }
  else {
    FUN_005bc740();
  }
  local_1050 = *param_3;
  uStack_1048 = param_3[1];
  local_1040 = param_3[2];
  uStack_1038 = param_3[3];
  iVar3 = vsprintf(acStack_1030,param_2,&local_1050);
  __n = (size_t)iVar3;
  uVar1 = __n + *(long *)(param_1 + 0x10) + 1;
  if (*(ulong *)(param_1 + 0x20) < uVar1) {
    FUN_005c5e00(param_1,uVar1,1);
  }
  memcpy(*(void **)(param_1 + 8),acStack_1030,__n);
  *(undefined1 *)(*(long *)(param_1 + 8) + __n) = 0;
  lVar4 = 0;
  if (*(long *)(param_1 + 8) != 0) {
    lVar2 = 0;
    do {
      lVar4 = lVar2;
      lVar2 = lVar4 + 1;
    } while (*(char *)(*(long *)(param_1 + 8) + lVar4) != '\0');
  }
  *(long *)(param_1 + 0x10) = lVar4;
  return;
}


