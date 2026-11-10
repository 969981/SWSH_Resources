/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e9a620; name: FUN_00e9a620
 */


undefined4 FUN_00e9a620(long param_1)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined4 uVar9;
  long lVar10;
  undefined1 auStack_38 [8];
  
  uVar6 = FUN_00e46320();
  puVar1 = PTR_DAT_02710798;
  if ((uVar6 & 1) == 0) {
    lVar8 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1d8);
    if (lVar8 != 0) {
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
    }
    iVar2 = FUN_01521090(lVar8,0x439);
    iVar3 = FUN_01521090(lVar8,0x4f2);
    iVar4 = FUN_01521090(lVar8,0x632);
    iVar5 = FUN_01521090(lVar8,0x631);
    if (iVar2 == 0 && iVar4 + iVar3 == -iVar5) {
      uVar9 = 1;
    }
    else {
      lVar7 = FUN_00a89ad0(*(undefined8 *)PTR_DAT_027194d8,auStack_38);
      if (*(char *)(lVar7 + 0x4a8) == '\0') {
        uVar9 = 2;
      }
      else {
        lVar7 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
        if (lVar7 != 0) {
          (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
        }
        lVar10 = *(long *)(*(long *)puVar1 + 0x1b8);
        if (lVar10 != 0) {
          (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
        }
        if (lVar7 != 0) {
          (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
        }
        uVar6 = FUN_01510f00(lVar10,0x517c8582756f0920);
        if (lVar10 != 0) {
          (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))((long *)(lVar10 + 0x48));
        }
        uVar9 = 2;
        if (((uVar6 & 1) == 0) && (uVar9 = 0, *(char *)(param_1 + 0x7f0) != '\0')) {
          uVar9 = 2;
        }
      }
    }
    if (lVar8 != 0) {
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
    }
  }
  else {
    uVar9 = 1;
  }
  return uVar9;
}


