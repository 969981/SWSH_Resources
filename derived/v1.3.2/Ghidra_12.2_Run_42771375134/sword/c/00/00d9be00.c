/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d9be00; name: FUN_00d9be00
 */


void FUN_00d9be00(long param_1,undefined4 param_2)

{
  int iVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  
  if (*(long *)(param_1 + 0x390) == 0) {
    *(undefined4 *)(param_1 + 0x360) = param_2;
    if (*(long *)(param_1 + 0x370) != 0) {
      lVar3 = FUN_00786910(*(undefined8 *)(param_1 + 0x358));
      if (lVar3 != 0) {
        *(byte *)(lVar3 + 0x58) = *(byte *)(lVar3 + 0x58) & 0xfe;
      }
      *(undefined8 *)(param_1 + 0x370) = 0;
    }
    if (*(int *)(param_1 + 0x36c) != -1) {
      iVar1 = *(int *)(param_1 + 0x36c) - *(int *)(param_1 + 0x3a0);
      uVar4 = FUN_00787110(*(undefined8 *)(param_1 + 0x358),iVar1);
      if ((uVar4 & 1) != 0) {
        FUN_00787070(*(undefined8 *)(param_1 + 0x358),iVar1);
      }
      *(undefined4 *)(param_1 + 0x36c) = 0xffffffff;
    }
    if (*(int *)(param_1 + 0x360) == 1) {
      lVar3 = (long)(int)*(uint *)(param_1 + 0x3a0) + 1;
      if ((uint)lVar3 < 0xc) {
        bVar2 = true;
      }
      else {
        *(undefined4 *)(param_1 + 0x368) = 0xffffffff;
        *(undefined4 *)(param_1 + 0x388) = 0xffffffff;
        if (0xb < *(uint *)(param_1 + 0x3a0)) {
          *(undefined4 *)(param_1 + 0x368) = 0xffffffff;
          *(undefined4 *)(param_1 + 0x388) = 0;
          *(undefined8 *)(param_1 + 0x390) =
               *(undefined8 *)(param_1 + (long)*(int *)(param_1 + 0x88) * 8 + 0x60);
          lVar3 = FUN_00786910(*(undefined8 *)(param_1 + 0x358));
          if (lVar3 == 0) {
            return;
          }
          *(byte *)(lVar3 + 0x58) = *(byte *)(lVar3 + 0x58) | 1;
          return;
        }
        lVar3 = 0xb;
        bVar2 = false;
      }
      *(int *)(param_1 + 0x388) = (int)lVar3;
      *(undefined8 *)(param_1 + 0x390) =
           *(undefined8 *)(param_1 + (long)*(int *)(param_1 + lVar3 * 0x10 + 0x88) * 8 + 0x60);
      lVar3 = FUN_00786910(*(undefined8 *)(param_1 + 0x358));
      if (lVar3 != 0) {
        *(byte *)(lVar3 + 0x58) = *(byte *)(lVar3 + 0x58) | 1;
      }
      if (bVar2) {
        iVar1 = *(int *)(param_1 + 0x388) - *(int *)(param_1 + 0x3a0);
        uVar4 = FUN_00787110(*(undefined8 *)(param_1 + 0x358),iVar1);
        if ((uVar4 & 1) == 0) {
          FUN_00786f10(*(undefined8 *)(param_1 + 0x358),iVar1,0);
        }
        FUN_00787170(*(undefined8 *)(param_1 + 0x358),iVar1,1);
        FUN_00786fd0(0,*(undefined8 *)(param_1 + 0x358),iVar1);
        return;
      }
    }
  }
  return;
}


