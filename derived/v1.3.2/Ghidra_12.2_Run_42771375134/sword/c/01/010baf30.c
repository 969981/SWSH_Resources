/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010baf30; name: FUN_010baf30
 */


void FUN_010baf30(long param_1)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  
  if (*(long *)(param_1 + 0x68) == 0) {
LAB_010bafd0:
    uVar4 = FUN_010384a0(*(undefined8 *)(param_1 + 0xa8));
  }
  else {
    puVar6 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
    if (puVar6 != (undefined8 *)0x0) {
      plVar2 = (long *)(**(code **)*puVar6)(puVar6);
      plVar3 = (long *)FUN_010aad10();
      if (plVar2 == (long *)0x0) goto LAB_010bafd0;
      do {
        if (plVar2 == plVar3) {
          puVar6 = puVar6 + -10;
          uVar4 = FUN_010384a0(*(undefined8 *)(param_1 + 0xa8));
          goto joined_r0x010baffc;
        }
        plVar2 = (long *)*plVar2;
      } while (plVar2 != (long *)0x0);
    }
    uVar4 = FUN_010384a0(*(undefined8 *)(param_1 + 0xa8));
  }
  puVar6 = (undefined8 *)0x0;
joined_r0x010baffc:
  if ((uVar4 & 1) == 0) {
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
    *(undefined4 *)(param_1 + 0x7c) = 0x1d;
  }
  else {
    if (iVar1 != 0) {
      return;
    }
    uVar5 = 0x820bdaff88566d79;
    *(undefined4 *)(param_1 + 0x7c) = 0x21;
    *(undefined1 *)(puVar6 + 0x10) = 0;
  }
  FUN_010bc320(param_1,uVar5,0,1,0,0);
  return;
}


