/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d9b460; name: FUN_00d9b460
 */


void FUN_00d9b460(long param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  
  if (*(int *)(param_1 + 0x360) == 1) {
    iVar1 = *(int *)(param_1 + 0x364);
  }
  else {
    *(undefined8 *)(param_1 + 0x398) = 0;
    iVar1 = *(int *)(param_1 + 0x364);
  }
  if (iVar1 == 3) {
    if (*(long *)(param_1 + 0x380) != 0) {
      lVar2 = FUN_00786910(*(undefined8 *)(param_1 + 0x358));
      if (lVar2 != 0) {
        *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) & 0xfe;
      }
      *(undefined8 *)(param_1 + 0x380) = 0;
    }
    if (*(int *)(param_1 + 0x378) != -1) {
      iVar1 = *(int *)(param_1 + 0x378) - *(int *)(param_1 + 0x3a0);
      uVar3 = FUN_00787110(*(undefined8 *)(param_1 + 0x358),iVar1);
      if ((uVar3 & 1) != 0) {
        FUN_00787070(*(undefined8 *)(param_1 + 0x358),iVar1);
      }
      *(undefined4 *)(param_1 + 0x378) = 0xffffffff;
    }
    iVar1 = *(int *)(param_1 + 0x364);
  }
  if (iVar1 == 2) {
    if (*(long *)(param_1 + 0x370) != 0) {
      lVar2 = FUN_00786910(*(undefined8 *)(param_1 + 0x358));
      if (lVar2 != 0) {
        *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) & 0xfe;
      }
      *(undefined8 *)(param_1 + 0x370) = 0;
    }
    if (*(int *)(param_1 + 0x36c) != -1) {
      iVar1 = *(int *)(param_1 + 0x36c) - *(int *)(param_1 + 0x3a0);
      uVar3 = FUN_00787110(*(undefined8 *)(param_1 + 0x358),iVar1);
      if ((uVar3 & 1) != 0) {
        FUN_00787070(*(undefined8 *)(param_1 + 0x358),iVar1);
      }
      *(undefined4 *)(param_1 + 0x36c) = 0xffffffff;
    }
    if (*(long *)(param_1 + 0x390) != 0) {
      lVar2 = FUN_00786910(*(undefined8 *)(param_1 + 0x358));
      if (lVar2 != 0) {
        *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) & 0xfe;
      }
      *(undefined8 *)(param_1 + 0x390) = 0;
    }
    if (*(int *)(param_1 + 0x388) != -1) {
      iVar1 = *(int *)(param_1 + 0x388) - *(int *)(param_1 + 0x3a0);
      uVar3 = FUN_00787110(*(undefined8 *)(param_1 + 0x358),iVar1);
      if ((uVar3 & 1) != 0) {
        FUN_00787070(*(undefined8 *)(param_1 + 0x358),iVar1);
      }
      *(undefined4 *)(param_1 + 0x388) = 0xffffffff;
    }
  }
  *(undefined4 *)(param_1 + 0x364) = 1;
  return;
}


