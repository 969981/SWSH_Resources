/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e31bb0; name: FUN_00e31bb0
 */


undefined8 FUN_00e31bb0(long param_1,undefined1 *param_2,ulong param_3)

{
  char cVar1;
  undefined *puVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  byte bVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  uint local_54;
  
  puVar2 = PTR_DAT_02710848;
  lVar7 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
  lVar4 = param_1;
  if (lVar7 != 0) {
    lVar4 = (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  lVar8 = *(long *)(lVar7 + 0x7b0);
  if (lVar8 != 0) {
    lVar4 = (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
  }
  if (*(int *)(param_1 + 0x278) == 2) {
    uVar3 = FUN_00e31e70(lVar4,param_2 + 2);
    uVar5 = FUN_00e05ad0(lVar8);
    if (-1 < (int)uVar3) goto LAB_00e31cf4;
    uVar3 = *(uint *)(param_1 + 0x2ac);
    if ((uVar3 >> 6 & 1) != 0) goto LAB_00e31c78;
LAB_00e31c40:
    if ((uVar3 >> 7 & 1) != 0) {
      uVar5 = FUN_00e320b0(uVar5,param_2 + 2,0xc);
      cVar1 = (char)uVar5;
      goto joined_r0x00e31c60;
    }
    if ((uVar3 >> 8 & 1) != 0) {
      uVar5 = FUN_00e320b0(uVar5,param_2 + 2,9);
      cVar1 = (char)uVar5;
      goto joined_r0x00e31c60;
    }
    if ((uVar3 >> 9 & 1) != 0) {
      uVar5 = FUN_00e320b0(uVar5,param_2 + 2,10);
      cVar1 = (char)uVar5;
      goto joined_r0x00e31c60;
    }
    if ((uVar3 >> 10 & 1) != 0) {
      uVar5 = FUN_00e320b0(uVar5,param_2 + 2,0xb);
      cVar1 = (char)uVar5;
      goto joined_r0x00e31c60;
    }
  }
  else {
    uVar5 = FUN_00e05ad0(lVar8);
    uVar3 = *(uint *)(param_1 + 0x2ac);
    if ((uVar3 >> 6 & 1) == 0) goto LAB_00e31c40;
LAB_00e31c78:
    uVar5 = FUN_00e320b0(uVar5,param_2 + 2,8);
    cVar1 = (char)uVar5;
joined_r0x00e31c60:
    uVar3 = (uint)cVar1;
    if (-1 < (int)uVar3) goto LAB_00e31cf4;
  }
  uVar5 = FUN_00e32500(uVar5,param_2 + 2);
  uVar3 = (uint)uVar5;
  if ((int)uVar3 < 0) {
    uVar3 = FUN_00e328a0(uVar5,param_2 + 2);
  }
LAB_00e31cf4:
  if (9 < uVar3) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (*(short *)(param_2 + (long)(int)uVar3 * 6 + 4) == 0) {
    uVar5 = 0;
  }
  else {
    FUN_00e329d0(param_1,param_1 + 0x58,param_2 + (long)(int)uVar3 * 6 + 2,*param_2,param_2[1],
                 param_1 + 0x2a8);
    *(undefined4 *)(param_1 + 0x268) = 1;
    if ((param_3 & 1) != 0) {
      local_54 = (uint)(byte)param_2[1];
      FUN_00e311c0(param_1,param_1 + 0x58,&local_54,*(int *)(param_1 + 0x278) != 0);
    }
    lVar4 = *(long *)(*(long *)puVar2 + 0x90);
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
    }
    lVar9 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1b8);
    if (lVar9 != 0) {
      (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
    }
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
    }
    uVar3 = FUN_015114c0(lVar9,0x188d41bb7b57fb);
    if ((0x7e3 < uVar3) && (*(char *)(*(long *)PTR_DAT_02717c48 + 0x350) != '\0')) {
      bVar6 = *(byte *)(param_1 + 0x5e);
      if (bVar6 < 0x3d) {
        bVar6 = 0x3c;
      }
      *(byte *)(param_1 + 0x5e) = bVar6;
    }
    if (lVar9 != 0) {
      (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
    }
    uVar5 = 1;
  }
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
  }
  (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
  return uVar5;
}


