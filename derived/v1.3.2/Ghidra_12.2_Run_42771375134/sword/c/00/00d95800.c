/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d95800; name: FUN_00d95800
 */


void FUN_00d95800(long param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  
  if (*(int *)(param_1 + 0x5d0) != 1) {
    *(undefined8 *)(param_1 + 0x608) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x5d4);
  if (iVar1 == 3) {
    if (*(char *)(param_1 + 0x651) != '\0') {
      *(undefined4 *)(param_1 + 0x5d4) = 4;
      *(undefined1 *)(param_1 + 0x651) = 0;
      return;
    }
    if (*(long *)(param_1 + 0x5f0) != 0) {
      lVar2 = FUN_00786910(*(undefined8 *)(param_1 + 0x5c8));
      if (lVar2 != 0) {
        *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) & 0xfe;
      }
      *(undefined8 *)(param_1 + 0x5f0) = 0;
    }
    iVar1 = *(int *)(param_1 + 0x5e8);
    if (iVar1 != -1) {
      uVar3 = FUN_00787110(*(undefined8 *)(param_1 + 0x5c8),iVar1);
      if ((uVar3 & 1) != 0) {
        FUN_00787070(*(undefined8 *)(param_1 + 0x5c8),iVar1);
      }
      *(undefined4 *)(param_1 + 0x5e8) = 0xffffffff;
    }
    iVar1 = *(int *)(param_1 + 0x5d4);
  }
  if (iVar1 == 2) {
    if (*(long *)(param_1 + 0x5e0) != 0) {
      lVar2 = FUN_00786910(*(undefined8 *)(param_1 + 0x5c8));
      if (lVar2 != 0) {
        *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) & 0xfe;
      }
      *(undefined8 *)(param_1 + 0x5e0) = 0;
    }
    iVar1 = *(int *)(param_1 + 0x5dc);
    if (iVar1 != -1) {
      uVar3 = FUN_00787110(*(undefined8 *)(param_1 + 0x5c8),iVar1);
      if ((uVar3 & 1) != 0) {
        FUN_00787070(*(undefined8 *)(param_1 + 0x5c8),iVar1);
      }
      *(undefined4 *)(param_1 + 0x5dc) = 0xffffffff;
    }
    if (*(long *)(param_1 + 0x600) != 0) {
      lVar2 = FUN_00786910(*(undefined8 *)(param_1 + 0x5c8));
      if (lVar2 != 0) {
        *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) & 0xfe;
      }
      *(undefined8 *)(param_1 + 0x600) = 0;
    }
    iVar1 = *(int *)(param_1 + 0x5f8);
    if (iVar1 != -1) {
      uVar3 = FUN_00787110(*(undefined8 *)(param_1 + 0x5c8),iVar1);
      if ((uVar3 & 1) != 0) {
        FUN_00787070(*(undefined8 *)(param_1 + 0x5c8),iVar1);
      }
      *(undefined4 *)(param_1 + 0x5f8) = 0xffffffff;
    }
  }
  *(undefined4 *)(param_1 + 0x5d4) = 1;
  return;
}


