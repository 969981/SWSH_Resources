/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005ef930; name: FUN_005ef930
 */


void FUN_005ef930(long param_1,char *param_2,undefined8 *param_3)

{
  ulong uVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  ulong __n;
  undefined8 local_1050;
  undefined8 uStack_1048;
  undefined8 local_1040;
  undefined8 uStack_1038;
  char acStack_1030 [4096];
  
  lVar5 = FUN_005bc740();
  if (lVar5 == 0) {
    FUN_005bc6f0();
  }
  else {
    FUN_005bc740();
  }
  local_1050 = *param_3;
  uStack_1048 = param_3[1];
  local_1040 = param_3[2];
  uStack_1038 = param_3[3];
  uVar4 = vsnprintf(acStack_1030,0x1000,param_2,&local_1050);
  uVar2 = 0;
  if (-1 < (int)uVar4) {
    uVar2 = uVar4;
  }
  __n = (ulong)uVar2;
  if (-1 < (int)uVar4) {
    lVar5 = *(long *)(param_1 + 0x10);
    uVar1 = __n + lVar5 + 1;
    if (*(ulong *)(param_1 + 0x20) < uVar1) {
      FUN_005c5e00(param_1,uVar1,1);
      lVar5 = *(long *)(param_1 + 0x10);
    }
    memcpy((void *)(*(long *)(param_1 + 8) + lVar5),acStack_1030,__n);
    *(undefined1 *)(*(long *)(param_1 + 8) + *(long *)(param_1 + 0x10) + __n) = 0;
    lVar5 = 0;
    if (*(long *)(param_1 + 8) != 0) {
      lVar3 = 0;
      do {
        lVar5 = lVar3;
        lVar3 = lVar5 + 1;
      } while (*(char *)(*(long *)(param_1 + 8) + lVar5) != '\0');
    }
    *(long *)(param_1 + 0x10) = lVar5;
  }
  return;
}


