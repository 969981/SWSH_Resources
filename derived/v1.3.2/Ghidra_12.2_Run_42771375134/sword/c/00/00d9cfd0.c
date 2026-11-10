/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d9cfd0; name: FUN_00d9cfd0
 */


void FUN_00d9cfd0(long param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  
  if (*(long *)(param_1 + 0x2e0) == 0) {
    *(undefined4 *)(param_1 + 0x2b0) = param_2;
    if (*(long *)(param_1 + 0x2c0) != 0) {
      lVar4 = FUN_00786910(*(undefined8 *)(param_1 + 0x2a8));
      if (lVar4 != 0) {
        *(byte *)(lVar4 + 0x58) = *(byte *)(lVar4 + 0x58) & 0xfe;
      }
      *(undefined8 *)(param_1 + 0x2c0) = 0;
    }
    iVar1 = *(int *)(param_1 + 700);
    if (iVar1 != -1) {
      uVar5 = FUN_00787110(*(undefined8 *)(param_1 + 0x2a8),iVar1);
      if ((uVar5 & 1) != 0) {
        FUN_00787070(*(undefined8 *)(param_1 + 0x2a8),iVar1);
      }
      *(undefined4 *)(param_1 + 700) = 0xffffffff;
    }
    if (*(int *)(param_1 + 0x2b0) == 1) {
      if (*(int *)(param_1 + 0x2b8) == 0) {
        iVar1 = *(int *)(param_1 + 0x6c);
        bVar3 = iVar1 == -1;
        *(int *)(param_1 + 0x2d8) = iVar1;
        if (bVar3) {
          iVar1 = *(int *)(param_1 + 0x68);
          *(int *)(param_1 + 0x2d8) = iVar1;
        }
        if (-1 < iVar1) {
          *(undefined8 *)(param_1 + 0x2e0) =
               *(undefined8 *)
                (param_1 + (long)*(int *)(param_1 + (long)iVar1 * 0x10 + 0x80) * 8 + 0x60);
          lVar4 = FUN_00786910(*(undefined8 *)(param_1 + 0x2a8));
          if (lVar4 != 0) {
            *(byte *)(lVar4 + 0x58) = *(byte *)(lVar4 + 0x58) | 1;
          }
          if (bVar3) {
            return;
          }
          uVar2 = *(undefined4 *)(param_1 + 0x2d8);
          uVar5 = FUN_00787110(*(undefined8 *)(param_1 + 0x2a8),uVar2);
          if ((uVar5 & 1) == 0) {
            FUN_00786f10(*(undefined8 *)(param_1 + 0x2a8),uVar2,0);
          }
          FUN_00787170(*(undefined8 *)(param_1 + 0x2a8),uVar2,1);
          FUN_00786fd0(0,*(undefined8 *)(param_1 + 0x2a8),uVar2);
          return;
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x2d8) = 0xffffffff;
        *(undefined4 *)(param_1 + 0x2b8) = 0xffffffff;
        *(undefined4 *)(param_1 + 0x2d8) = 0xffffffff;
      }
      *(undefined4 *)(param_1 + 0x2d8) = 0;
      *(undefined8 *)(param_1 + 0x2e0) =
           *(undefined8 *)(param_1 + (long)*(int *)(param_1 + 0x80) * 8 + 0x60);
      lVar4 = FUN_00786910(*(undefined8 *)(param_1 + 0x2a8));
      if (lVar4 != 0) {
        *(byte *)(lVar4 + 0x58) = *(byte *)(lVar4 + 0x58) | 1;
      }
    }
  }
  return;
}


