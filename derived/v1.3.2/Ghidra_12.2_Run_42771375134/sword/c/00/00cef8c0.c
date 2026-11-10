/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00cef8c0; name: FUN_00cef8c0
 */


void FUN_00cef8c0(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  
  lVar3 = *(long *)(param_1 + 0x128);
  iVar1 = *(int *)(lVar3 + 0x5cc);
  if (iVar1 == 0) {
    return;
  }
  if (iVar1 == 2) {
    uVar2 = *(undefined4 *)(lVar3 + 0x5d0);
    *(undefined4 *)(param_1 + 0x120) = 4;
    puVar5 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
    plVar4 = (long *)(**(code **)*puVar5)(puVar5);
    lVar3 = FUN_00ce9310();
    for (; plVar4 != (long *)lVar3; plVar4 = (long *)*plVar4) {
    }
    *(undefined4 *)((long)puVar5 + 0x14) = uVar2;
    lVar3 = *(long *)(param_1 + 0x128);
  }
  else if (iVar1 == 1) {
    *(undefined4 *)(param_1 + 0x120) = 1;
  }
  FUN_010364c0(lVar3,3);
  FUN_01038270(*(undefined8 *)(param_1 + 0x88),1);
  *(undefined4 *)(param_1 + 0x124) = 2;
  *(undefined8 *)(*(long *)(param_1 + 0x128) + 0x5cc) = 0x100000000;
  FUN_00ffa160(*(undefined8 *)(param_1 + 0x128),0,1);
  return;
}


