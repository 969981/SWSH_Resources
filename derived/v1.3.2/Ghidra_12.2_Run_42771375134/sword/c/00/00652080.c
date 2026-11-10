/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00652080; name: FUN_00652080
 */


void FUN_00652080(long *param_1,int param_2)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_30 [16];
  
  if (param_2 != -1) {
    FUN_006966f0(auStack_30,param_1 + 4,1);
    uVar1 = (param_2 - *(int *)((long)param_1 + 0x74)) + 2;
    if (uVar1 < *(int *)((long)param_1 + 0x5c) + 2U) {
      lVar2 = *param_1 + (ulong)uVar1 * 0x18;
    }
    else {
      lVar2 = 0;
    }
    *(undefined8 *)(*(long *)(lVar2 + 8) + 0x10) = *(undefined8 *)(lVar2 + 0x10);
    *(undefined8 *)(*(long *)(lVar2 + 0x10) + 8) = *(undefined8 *)(lVar2 + 8);
    uVar3 = *(undefined8 *)(param_1[3] + 0x10);
    *(undefined8 *)(lVar2 + 8) = 0;
    *(undefined8 *)(lVar2 + 0x10) = uVar3;
    *(long *)(param_1[3] + 0x10) = lVar2;
    *(int *)(param_1 + 0xb) = (int)param_1[0xb] + -1;
    FUN_00696730(auStack_30);
  }
  return;
}


