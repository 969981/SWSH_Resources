/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010ba3d0; name: FUN_010ba3d0
 */


void FUN_010ba3d0(long param_1)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  
  uVar2 = FUN_010384a0(*(undefined8 *)(param_1 + 0xa8));
  if ((uVar2 & 1) == 0) {
    return;
  }
  iVar1 = FUN_010386e0(*(undefined8 *)(param_1 + 0xa8));
  if (iVar1 == 2) {
    *(undefined4 *)(param_1 + 0x7c) = 1;
    FUN_01038270(*(undefined8 *)(param_1 + 0xa8),1);
    FUN_00ffa3d0(*(undefined8 *)(param_1 + 0x88),0);
    FUN_010bc6f0(param_1,1,1);
    return;
  }
  if (iVar1 == 1) {
    uVar5 = 0x3d116582b196eb91;
    *(undefined4 *)(param_1 + 0x7c) = 0x15;
  }
  else {
    if (iVar1 != 0) {
      return;
    }
    *(undefined4 *)(param_1 + 0x7c) = 0x19;
    puVar6 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
    plVar3 = (long *)(**(code **)*puVar6)(puVar6);
    lVar4 = FUN_010aad10();
    for (; plVar3 != (long *)lVar4; plVar3 = (long *)*plVar3) {
    }
    uVar5 = 0x1efd4ea03dcc0c9e;
    *(undefined1 *)(puVar6 + 6) = 0;
  }
  FUN_010bc320(param_1,uVar5,0,1,0,0);
  return;
}


