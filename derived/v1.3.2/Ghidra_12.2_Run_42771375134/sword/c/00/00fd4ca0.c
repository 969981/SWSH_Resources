/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fd4ca0; name: FUN_00fd4ca0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00fd4ca0(long param_1,int param_2)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 local_38;
  
  uVar4 = FUN_00ecee70();
  if ((((uVar4 & 1) != 0) ||
      (uVar1 = *(int *)(param_1 + (long)param_2 * 0x28 + 0x630) - 3, 5 < uVar1)) ||
     ((0x33U >> (ulong)(uVar1 & 0x1f) & 1) == 0)) {
    uVar4 = FUN_00ecef00();
    if (((uVar4 & 1) != 0) || (*(int *)(param_1 + (long)param_2 * 0x28 + 0x630) != 6)) {
      bVar2 = 1;
      goto LAB_00fd4d18;
    }
    if (*(char *)(param_1 + 2000) == '\0') {
      *(undefined1 *)(param_1 + 2000) = 1;
      bVar2 = 0;
      **(undefined4 **)(param_1 + 0x620) = 7;
      goto LAB_00fd4d18;
    }
  }
  bVar2 = 0;
LAB_00fd4d18:
  lVar7 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  lVar6 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1b8);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
  }
  uVar4 = FUN_01510f00(lVar6,0xf3e80e69b65b81fe);
  lVar7 = (long)param_2;
  if ((uVar4 & 1) != 0) {
    bVar2 = bVar2 & *(int *)(param_1 + lVar7 * 0x28 + 0x630) != 8;
  }
  lVar5 = param_1 + lVar7 * 0x28;
  if (((*(int *)(lVar5 + 0x644) == 0) || (*(char *)(param_1 + lVar7 * 0x28 + 0x651) == '\0')) ||
     ((bool)(bVar2 ^ 1))) {
    if (*(long *)(param_1 + 0x4c0) != 0) {
      FUN_016d2080();
    }
  }
  else {
    *(undefined4 *)(*(long *)(param_1 + 0x5d0) + 8) =
         *(undefined4 *)(param_1 + lVar7 * 0x28 + 0x640);
    **(undefined4 **)(param_1 + 0x5d0) = *(undefined4 *)(lVar5 + 0x644);
    **(undefined4 **)(param_1 + 0x620) = 1;
    if (**(int **)(param_1 + 0x5d0) == 8) {
      if (((DAT_02a617a0 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_02a617a0), iVar3 != 0)) {
        DAT_02a617b0 = 0;
        DAT_02a617b8 = 0;
        __cxa_guard_release(&DAT_02a617a0);
      }
      if (((DAT_02a617a8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_02a617a8), iVar3 != 0)) {
        uRam0000000002a617c8 = _UNK_01d4b6c8;
        _DAT_02a617c0 = _DAT_01d4b6c0;
        __cxa_guard_release(&DAT_02a617a8);
      }
      FUN_00d940b0(*(undefined8 *)PTR_DAT_02710868,0,0,&DAT_02a617b0,&DAT_02a617c0,2,1,1);
    }
    if (*(char *)(param_1 + 0x5cb) == '\0') {
      *(undefined1 *)(param_1 + 0x5cb) = 1;
      local_38 = 0xc0b802cc3afa6c58;
      lVar7 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),&local_38);
      *(byte *)(lVar7 + 0x58) = *(byte *)(lVar7 + 0x58) & 0xfe;
      FUN_00ffcf80(param_1 + 0x100,"anime_fade_out");
      lVar7 = *(long *)(param_1 + 0x7c8);
      if (*(char *)(lVar7 + 0x5cb) == '\0') {
        *(undefined1 *)(lVar7 + 0x5cb) = 1;
        FUN_00ffcf80(lVar7 + 0x100,"anime_fade_out");
      }
    }
  }
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  }
  return;
}


