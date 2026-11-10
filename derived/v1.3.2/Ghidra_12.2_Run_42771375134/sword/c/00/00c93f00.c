/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c93f00; name: FUN_00c93f00
 */


void FUN_00c93f00(long param_1)

{
  long lVar1;
  long lVar2;
  int iVar3;
  char cVar4;
  long *plVar5;
  undefined4 uVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long local_68;
  
  lVar8 = 0;
  lVar10 = 0;
  lVar1 = param_1 + 0x5b0;
  do {
    lVar2 = param_1 + lVar8;
    iVar3 = *(int *)(lVar2 + 0x2dc);
    cVar4 = *(char *)(lVar2 + 0x2e4);
    lVar12 = *(long *)(param_1 + lVar10 * 8 + 0x1e0);
    uVar9 = (uint)lVar10;
    if ((((uVar9 & 0x7fffffff) < 0x10) && ((1 << (ulong)(uVar9 & 0x1f) & 0x9082U) != 0)) ||
       (uVar9 - 3 < 3)) {
      lVar7 = *(long *)(param_1 + 0x270);
      plVar5 = (long *)(param_1 + 200);
      if (lVar7 != 0) goto LAB_00c93f74;
LAB_00c94020:
      local_68 = 0;
LAB_00c94024:
      plVar5 = (long *)FUN_00cbd3c0();
      *(uint *)(lVar1 + lVar10 * 4) = (uint)(lVar12 != *plVar5);
    }
    else {
      plVar5 = (long *)FUN_00c7cc60(*(undefined8 *)(param_1 + 0xa0),0x1f);
      lVar7 = *(long *)(param_1 + 0x270);
      if (lVar7 == 0) goto LAB_00c94020;
LAB_00c93f74:
      lVar11 = *plVar5;
      FUN_00c834c0(lVar7,*(undefined1 *)(lVar2 + 0x2e3));
      FUN_00c825a0(&local_68);
      if (local_68 == 0) goto LAB_00c94024;
      if (((iVar3 == *(int *)(local_68 + 0xb0)) && (cVar4 == *(char *)(local_68 + 0xb4))) &&
         ((lVar12 == *(long *)(local_68 + 0xb8) && (lVar11 == *(long *)(local_68 + 0xc0))))) {
        *(undefined4 *)(lVar1 + lVar10 * 4) = 0;
      }
      else {
        plVar5 = (long *)FUN_00cbd3c0();
        uVar6 = 2;
        if (lVar12 != *plVar5) {
          uVar6 = 3;
        }
        *(undefined4 *)(lVar1 + lVar10 * 4) = uVar6;
      }
    }
    if (local_68 != 0) {
      (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
      local_68 = 0;
    }
    lVar10 = lVar10 + 1;
    lVar8 = lVar8 + 0xc;
    if (lVar10 == 0x10) {
      return;
    }
  } while( true );
}


