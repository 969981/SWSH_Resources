/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01333750; name: FUN_01333750
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01333750(long *param_1,long param_2,ulong param_3)

{
  char cVar1;
  ulong uVar2;
  long lVar3;
  int *piVar4;
  undefined8 *puVar5;
  int *piVar6;
  long lVar7;
  undefined8 uVar8;
  uint *puVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  long local_60;
  long local_58;
  long local_48;
  
  if ((((*(long *)(param_2 + 0x68) == 0) || (*(char *)(*(long *)(param_2 + 0x68) + 0x170) == '\0'))
      || (uVar2 = FUN_014bca10(*(undefined8 *)(param_2 + 0x170)), (uVar2 & 1) == 0)) ||
     (puVar9 = *(uint **)(*(long *)(param_2 + 0x68) + 400),
     piVar6 = (int *)((long)puVar9 + (ulong)*puVar9),
     puVar9 = (uint *)((long)piVar6 + (ulong)*(ushort *)((long)piVar6 + (4 - (long)*piVar6))),
     *(uint *)((long)puVar9 + (ulong)*puVar9) <= param_3)) {
    *param_1 = 0;
    return;
  }
  lVar3 = FUN_008ea4d0(&local_48,*(undefined8 *)(param_2 + 0x58));
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  puVar9 = *(uint **)(*(long *)(param_2 + 0x68) + 400);
  piVar6 = (int *)((long)puVar9 + (ulong)*puVar9);
  puVar9 = (uint *)((long)piVar6 + (ulong)*(ushort *)((long)piVar6 + (4 - (long)*piVar6)));
  puVar9 = (uint *)((long)puVar9 + (param_3 & 0xffffffff) * 4 + (ulong)*puVar9 + 4);
  piVar6 = (int *)((long)puVar9 + (ulong)*puVar9);
  if ((*(ushort *)((long)piVar6 - (long)*piVar6) < 9) ||
     (uVar2 = (ulong)((ushort *)((long)piVar6 - (long)*piVar6))[4], uVar2 == 0)) {
    uVar8 = 0;
  }
  else {
    uVar8 = *(undefined8 *)((long)piVar6 + uVar2);
  }
  FUN_01334620(&local_48,param_2,uVar8);
  FUN_01524b70(lVar3,local_48);
  if ((*(ushort *)((long)piVar6 - (long)*piVar6) < 0xd) ||
     (uVar2 = (ulong)((ushort *)((long)piVar6 - (long)*piVar6))[6], uVar2 == 0)) {
    FUN_01524bd0(lVar3,0);
    lVar10 = *(long *)(param_2 + 0x68);
    piVar4 = (int *)0x0;
    if (lVar10 != 0) goto LAB_013338c4;
  }
  else {
    FUN_01524bd0(lVar3,*(undefined4 *)((long)piVar6 + uVar2));
    lVar10 = *(long *)(param_2 + 0x68);
    if (lVar10 == 0) {
      piVar4 = (int *)0x0;
    }
    else {
LAB_013338c4:
      piVar4 = (int *)((long)*(uint **)(lVar10 + 400) + (ulong)**(uint **)(lVar10 + 400));
    }
  }
  if ((*(ushort *)((long)piVar4 - (long)*piVar4) < 0xb) ||
     (uVar2 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[5], uVar2 == 0)) {
    FUN_01524ec0(lVar3,0);
    lVar10 = *(long *)(param_2 + 0x68);
  }
  else {
    FUN_01524ec0(lVar3,*(undefined4 *)((long)piVar4 + uVar2));
    lVar10 = *(long *)(param_2 + 0x68);
  }
  if (((lVar10 != 0) && (*(char *)(lVar10 + 0x170) != '\0')) &&
     (uVar2 = FUN_014bca10(*(undefined8 *)(param_2 + 0x170)), (uVar2 & 1) != 0)) {
    puVar9 = *(uint **)(*(long *)(param_2 + 0x68) + 400);
    piVar4 = (int *)((long)puVar9 + (ulong)*puVar9);
    puVar9 = (uint *)((long)piVar4 + (ulong)*(ushort *)((long)piVar4 + (4 - (long)*piVar4)));
    puVar9 = (uint *)((long)puVar9 + (ulong)*puVar9);
    if (param_3 < *puVar9) {
      puVar9 = puVar9 + (param_3 & 0xffffffff) + 1;
      piVar4 = (int *)((long)puVar9 + (ulong)*puVar9);
      if (((*(ushort *)((long)piVar4 - (long)*piVar4) < 0xb) ||
          (uVar2 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[5], uVar2 == 0)) ||
         (*(long *)((long)piVar4 + uVar2) != -0x340d631b7bddd9bb)) goto joined_r0x01334610;
    }
  }
  lVar10 = FUN_01524df0(lVar3);
  lVar12 = *(long *)(*(long *)PTR_DAT_02710848 + 0x78);
  if (lVar12 != 0) {
    (**(code **)(*(long *)(lVar12 + 0x48) + 0x10))();
  }
  FUN_00c58c20(&local_60,lVar12);
  uVar8 = _DAT_00001588;
  if (local_60 != 0) {
    FUN_00c62ba0(&local_58);
    uVar8 = *(undefined8 *)(&DAT_00001588 + local_58);
    if (local_58 != 0) {
      (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    }
  }
  local_58 = 0;
  if (local_60 != 0) {
    (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
    local_60 = 0;
  }
  if (lVar12 != 0) {
    (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))((long *)(lVar12 + 0x48));
  }
  cVar1 = FUN_01524bf0(lVar3);
  if (cVar1 == '\0') {
    uVar8 = FUN_00cbf610(uVar8);
  }
  else {
    uVar8 = FUN_00cbf600(uVar8);
  }
  if (*(ushort *)((long)piVar6 - (long)*piVar6) < 7) {
    piVar4 = (int *)0x0;
  }
  else {
    uVar2 = (ulong)((ushort *)((long)piVar6 - (long)*piVar6))[3];
    piVar4 = (int *)0x0;
    if (uVar2 != 0) {
      puVar9 = (uint *)((long)piVar6 + uVar2);
      piVar4 = (int *)((long)puVar9 + (ulong)*puVar9);
    }
  }
  if ((*(ushort *)((long)piVar4 - (long)*piVar4) < 0x1b) ||
     (uVar2 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[0xd], uVar2 == 0)) {
    uVar11 = 0;
  }
  else {
    uVar11 = *(undefined8 *)((long)piVar4 + uVar2);
  }
  *(undefined8 *)(lVar10 + 0x88) = uVar11;
  if (*(ushort *)((long)piVar6 - (long)*piVar6) < 7) {
    piVar4 = (int *)0x0;
  }
  else {
    uVar2 = (ulong)((ushort *)((long)piVar6 - (long)*piVar6))[3];
    piVar4 = (int *)0x0;
    if (uVar2 != 0) {
      puVar9 = (uint *)((long)piVar6 + uVar2);
      piVar4 = (int *)((long)puVar9 + (ulong)*puVar9);
    }
  }
  if ((*(ushort *)((long)piVar4 - (long)*piVar4) < 0x1f) ||
     (uVar2 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[0xf], uVar2 == 0)) {
    piVar4 = (int *)FUN_00c97360(uVar8,0,0);
    if (piVar4 != (int *)0x0) goto LAB_01333b58;
LAB_01333b38:
    puVar5 = (undefined8 *)FUN_00cbd3c0();
    uVar11 = *puVar5;
  }
  else {
    piVar4 = (int *)FUN_00c97360(uVar8,0,*(undefined4 *)((long)piVar4 + uVar2));
    if (piVar4 == (int *)0x0) goto LAB_01333b38;
LAB_01333b58:
    if ((*(ushort *)((long)piVar4 - (long)*piVar4) < 5) ||
       (uVar2 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[2], uVar2 == 0)) {
      uVar11 = 0;
    }
    else {
      uVar11 = *(undefined8 *)((long)piVar4 + uVar2);
    }
  }
  FUN_00cc13b0(lVar10,0,uVar11);
  if (*(ushort *)((long)piVar6 - (long)*piVar6) < 7) {
    piVar4 = (int *)0x0;
  }
  else {
    uVar2 = (ulong)((ushort *)((long)piVar6 - (long)*piVar6))[3];
    piVar4 = (int *)0x0;
    if (uVar2 != 0) {
      puVar9 = (uint *)((long)piVar6 + uVar2);
      piVar4 = (int *)((long)puVar9 + (ulong)*puVar9);
    }
  }
  if ((*(ushort *)((long)piVar4 - (long)*piVar4) < 0x15) ||
     (uVar2 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[10], uVar2 == 0)) {
    piVar4 = (int *)FUN_00c97360(uVar8,1,0);
    if (piVar4 != (int *)0x0) goto LAB_01333c0c;
LAB_01333bec:
    puVar5 = (undefined8 *)FUN_00cbd3c0();
    uVar11 = *puVar5;
  }
  else {
    piVar4 = (int *)FUN_00c97360(uVar8,1,*(undefined4 *)((long)piVar4 + uVar2));
    if (piVar4 == (int *)0x0) goto LAB_01333bec;
LAB_01333c0c:
    if ((*(ushort *)((long)piVar4 - (long)*piVar4) < 5) ||
       (uVar2 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[2], uVar2 == 0)) {
      uVar11 = 0;
    }
    else {
      uVar11 = *(undefined8 *)((long)piVar4 + uVar2);
    }
  }
  FUN_00cc13b0(lVar10,1,uVar11);
  if (*(ushort *)((long)piVar6 - (long)*piVar6) < 7) {
    piVar4 = (int *)0x0;
  }
  else {
    uVar2 = (ulong)((ushort *)((long)piVar6 - (long)*piVar6))[3];
    piVar4 = (int *)0x0;
    if (uVar2 != 0) {
      puVar9 = (uint *)((long)piVar6 + uVar2);
      piVar4 = (int *)((long)puVar9 + (ulong)*puVar9);
    }
  }
  if ((*(ushort *)((long)piVar4 - (long)*piVar4) < 0xd) ||
     (uVar2 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[6], uVar2 == 0)) {
    piVar4 = (int *)FUN_00c97360(uVar8,2,0);
    if (piVar4 != (int *)0x0) goto LAB_01333cc0;
LAB_01333ca0:
    puVar5 = (undefined8 *)FUN_00cbd3c0();
    uVar11 = *puVar5;
  }
  else {
    piVar4 = (int *)FUN_00c97360(uVar8,2,*(undefined4 *)((long)piVar4 + uVar2));
    if (piVar4 == (int *)0x0) goto LAB_01333ca0;
LAB_01333cc0:
    if ((*(ushort *)((long)piVar4 - (long)*piVar4) < 5) ||
       (uVar2 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[2], uVar2 == 0)) {
      uVar11 = 0;
    }
    else {
      uVar11 = *(undefined8 *)((long)piVar4 + uVar2);
    }
  }
  FUN_00cc13b0(lVar10,2,uVar11);
  if (*(ushort *)((long)piVar6 - (long)*piVar6) < 7) {
    piVar4 = (int *)0x0;
  }
  else {
    uVar2 = (ulong)((ushort *)((long)piVar6 - (long)*piVar6))[3];
    piVar4 = (int *)0x0;
    if (uVar2 != 0) {
      puVar9 = (uint *)((long)piVar6 + uVar2);
      piVar4 = (int *)((long)puVar9 + (ulong)*puVar9);
    }
  }
  if ((*(ushort *)((long)piVar4 - (long)*piVar4) < 0xf) ||
     (uVar2 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[7], uVar2 == 0)) {
    piVar4 = (int *)FUN_00c97360(uVar8,3,0);
    if (piVar4 != (int *)0x0) goto LAB_01333d74;
LAB_01333d54:
    puVar5 = (undefined8 *)FUN_00cbd3c0();
    uVar11 = *puVar5;
  }
  else {
    piVar4 = (int *)FUN_00c97360(uVar8,3,*(undefined4 *)((long)piVar4 + uVar2));
    if (piVar4 == (int *)0x0) goto LAB_01333d54;
LAB_01333d74:
    if ((*(ushort *)((long)piVar4 - (long)*piVar4) < 5) ||
       (uVar2 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[2], uVar2 == 0)) {
      uVar11 = 0;
    }
    else {
      uVar11 = *(undefined8 *)((long)piVar4 + uVar2);
    }
  }
  FUN_00cc13b0(lVar10,3,uVar11);
  if (*(ushort *)((long)piVar6 - (long)*piVar6) < 7) {
    piVar4 = (int *)0x0;
  }
  else {
    uVar2 = (ulong)((ushort *)((long)piVar6 - (long)*piVar6))[3];
    piVar4 = (int *)0x0;
    if (uVar2 != 0) {
      puVar9 = (uint *)((long)piVar6 + uVar2);
      piVar4 = (int *)((long)puVar9 + (ulong)*puVar9);
    }
  }
  if ((*(ushort *)((long)piVar4 - (long)*piVar4) < 0xb) ||
     (uVar2 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[5], uVar2 == 0)) {
    piVar4 = (int *)FUN_00c97360(uVar8,4,0);
    if (piVar4 != (int *)0x0) goto LAB_01333e28;
LAB_01333e08:
    puVar5 = (undefined8 *)FUN_00cbd3c0();
    uVar11 = *puVar5;
  }
  else {
    piVar4 = (int *)FUN_00c97360(uVar8,4,*(undefined4 *)((long)piVar4 + uVar2));
    if (piVar4 == (int *)0x0) goto LAB_01333e08;
LAB_01333e28:
    if ((*(ushort *)((long)piVar4 - (long)*piVar4) < 5) ||
       (uVar2 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[2], uVar2 == 0)) {
      uVar11 = 0;
    }
    else {
      uVar11 = *(undefined8 *)((long)piVar4 + uVar2);
    }
  }
  FUN_00cc13b0(lVar10,4,uVar11);
  if (*(ushort *)((long)piVar6 - (long)*piVar6) < 7) {
    piVar4 = (int *)0x0;
  }
  else {
    uVar2 = (ulong)((ushort *)((long)piVar6 - (long)*piVar6))[3];
    piVar4 = (int *)0x0;
    if (uVar2 != 0) {
      puVar9 = (uint *)((long)piVar6 + uVar2);
      piVar4 = (int *)((long)puVar9 + (ulong)*puVar9);
    }
  }
  if ((*(ushort *)((long)piVar4 - (long)*piVar4) < 0x19) ||
     (uVar2 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[0xc], uVar2 == 0)) {
    piVar4 = (int *)FUN_00c97360(uVar8,5,0);
    if (piVar4 != (int *)0x0) goto LAB_01333edc;
LAB_01333ebc:
    puVar5 = (undefined8 *)FUN_00cbd3c0();
    uVar11 = *puVar5;
  }
  else {
    piVar4 = (int *)FUN_00c97360(uVar8,5,*(undefined4 *)((long)piVar4 + uVar2));
    if (piVar4 == (int *)0x0) goto LAB_01333ebc;
LAB_01333edc:
    if ((*(ushort *)((long)piVar4 - (long)*piVar4) < 5) ||
       (uVar2 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[2], uVar2 == 0)) {
      uVar11 = 0;
    }
    else {
      uVar11 = *(undefined8 *)((long)piVar4 + uVar2);
    }
  }
  FUN_00cc13b0(lVar10,5,uVar11);
  if (*(ushort *)((long)piVar6 - (long)*piVar6) < 7) {
    piVar4 = (int *)0x0;
  }
  else {
    uVar2 = (ulong)((ushort *)((long)piVar6 - (long)*piVar6))[3];
    piVar4 = (int *)0x0;
    if (uVar2 != 0) {
      puVar9 = (uint *)((long)piVar6 + uVar2);
      piVar4 = (int *)((long)puVar9 + (ulong)*puVar9);
    }
  }
  if ((*(ushort *)((long)piVar4 - (long)*piVar4) < 0x11) ||
     (uVar2 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[8], uVar2 == 0)) {
    piVar4 = (int *)FUN_00c97360(uVar8,6,0);
    if (piVar4 != (int *)0x0) goto LAB_01333f90;
LAB_01333f70:
    puVar5 = (undefined8 *)FUN_00cbd3c0();
    uVar11 = *puVar5;
  }
  else {
    piVar4 = (int *)FUN_00c97360(uVar8,6,*(undefined4 *)((long)piVar4 + uVar2));
    if (piVar4 == (int *)0x0) goto LAB_01333f70;
LAB_01333f90:
    if ((*(ushort *)((long)piVar4 - (long)*piVar4) < 5) ||
       (uVar2 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[2], uVar2 == 0)) {
      uVar11 = 0;
    }
    else {
      uVar11 = *(undefined8 *)((long)piVar4 + uVar2);
    }
  }
  FUN_00cc13b0(lVar10,6,uVar11);
  if (*(ushort *)((long)piVar6 - (long)*piVar6) < 7) {
    piVar4 = (int *)0x0;
  }
  else {
    uVar2 = (ulong)((ushort *)((long)piVar6 - (long)*piVar6))[3];
    piVar4 = (int *)0x0;
    if (uVar2 != 0) {
      puVar9 = (uint *)((long)piVar6 + uVar2);
      piVar4 = (int *)((long)puVar9 + (ulong)*puVar9);
    }
  }
  if ((*(ushort *)((long)piVar4 - (long)*piVar4) < 9) ||
     (uVar2 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[4], uVar2 == 0)) {
    piVar4 = (int *)FUN_00c97360(uVar8,7,0);
    if (piVar4 != (int *)0x0) goto LAB_01334044;
LAB_01334024:
    puVar5 = (undefined8 *)FUN_00cbd3c0();
    uVar11 = *puVar5;
  }
  else {
    piVar4 = (int *)FUN_00c97360(uVar8,7,*(undefined4 *)((long)piVar4 + uVar2));
    if (piVar4 == (int *)0x0) goto LAB_01334024;
LAB_01334044:
    if ((*(ushort *)((long)piVar4 - (long)*piVar4) < 5) ||
       (uVar2 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[2], uVar2 == 0)) {
      uVar11 = 0;
    }
    else {
      uVar11 = *(undefined8 *)((long)piVar4 + uVar2);
    }
  }
  FUN_00cc13b0(lVar10,7,uVar11);
  if (*(ushort *)((long)piVar6 - (long)*piVar6) < 7) {
    piVar4 = (int *)0x0;
  }
  else {
    uVar2 = (ulong)((ushort *)((long)piVar6 - (long)*piVar6))[3];
    piVar4 = (int *)0x0;
    if (uVar2 != 0) {
      puVar9 = (uint *)((long)piVar6 + uVar2);
      piVar4 = (int *)((long)puVar9 + (ulong)*puVar9);
    }
  }
  if ((*(ushort *)((long)piVar4 - (long)*piVar4) < 0x23) ||
     (uVar2 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[0x11], uVar2 == 0)) {
    piVar4 = (int *)FUN_00c97360(uVar8,8,0);
    if (piVar4 != (int *)0x0) goto LAB_013340f8;
LAB_013340d8:
    puVar5 = (undefined8 *)FUN_00cbd3c0();
    uVar11 = *puVar5;
  }
  else {
    piVar4 = (int *)FUN_00c97360(uVar8,8,*(undefined4 *)((long)piVar4 + uVar2));
    if (piVar4 == (int *)0x0) goto LAB_013340d8;
LAB_013340f8:
    if ((*(ushort *)((long)piVar4 - (long)*piVar4) < 5) ||
       (uVar2 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[2], uVar2 == 0)) {
      uVar11 = 0;
    }
    else {
      uVar11 = *(undefined8 *)((long)piVar4 + uVar2);
    }
  }
  FUN_00cc13b0(lVar10,8,uVar11);
  if (*(ushort *)((long)piVar6 - (long)*piVar6) < 7) {
    piVar4 = (int *)0x0;
  }
  else {
    uVar2 = (ulong)((ushort *)((long)piVar6 - (long)*piVar6))[3];
    piVar4 = (int *)0x0;
    if (uVar2 != 0) {
      puVar9 = (uint *)((long)piVar6 + uVar2);
      piVar4 = (int *)((long)puVar9 + (ulong)*puVar9);
    }
  }
  if ((*(ushort *)((long)piVar4 - (long)*piVar4) < 0x17) ||
     (uVar2 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[0xb], uVar2 == 0)) {
    piVar4 = (int *)FUN_00c97360(uVar8,9,0);
    if (piVar4 != (int *)0x0) goto LAB_013341ac;
LAB_0133418c:
    puVar5 = (undefined8 *)FUN_00cbd3c0();
    uVar11 = *puVar5;
  }
  else {
    piVar4 = (int *)FUN_00c97360(uVar8,9,*(undefined4 *)((long)piVar4 + uVar2));
    if (piVar4 == (int *)0x0) goto LAB_0133418c;
LAB_013341ac:
    if ((*(ushort *)((long)piVar4 - (long)*piVar4) < 5) ||
       (uVar2 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[2], uVar2 == 0)) {
      uVar11 = 0;
    }
    else {
      uVar11 = *(undefined8 *)((long)piVar4 + uVar2);
    }
  }
  FUN_00cc13b0(lVar10,9,uVar11);
  if (*(ushort *)((long)piVar6 - (long)*piVar6) < 7) {
    piVar4 = (int *)0x0;
  }
  else {
    uVar2 = (ulong)((ushort *)((long)piVar6 - (long)*piVar6))[3];
    piVar4 = (int *)0x0;
    if (uVar2 != 0) {
      puVar9 = (uint *)((long)piVar6 + uVar2);
      piVar4 = (int *)((long)puVar9 + (ulong)*puVar9);
    }
  }
  if ((*(ushort *)((long)piVar4 - (long)*piVar4) < 5) ||
     (uVar2 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[2], uVar2 == 0)) {
    piVar4 = (int *)FUN_00c97360(uVar8,10,0);
    if (piVar4 != (int *)0x0) goto LAB_01334260;
LAB_01334240:
    puVar5 = (undefined8 *)FUN_00cbd3c0();
    uVar11 = *puVar5;
  }
  else {
    piVar4 = (int *)FUN_00c97360(uVar8,10,*(undefined4 *)((long)piVar4 + uVar2));
    if (piVar4 == (int *)0x0) goto LAB_01334240;
LAB_01334260:
    if ((*(ushort *)((long)piVar4 - (long)*piVar4) < 5) ||
       (uVar2 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[2], uVar2 == 0)) {
      uVar11 = 0;
    }
    else {
      uVar11 = *(undefined8 *)((long)piVar4 + uVar2);
    }
  }
  FUN_00cc13b0(lVar10,10,uVar11);
  if (*(ushort *)((long)piVar6 - (long)*piVar6) < 7) {
    piVar4 = (int *)0x0;
  }
  else {
    uVar2 = (ulong)((ushort *)((long)piVar6 - (long)*piVar6))[3];
    piVar4 = (int *)0x0;
    if (uVar2 != 0) {
      puVar9 = (uint *)((long)piVar6 + uVar2);
      piVar4 = (int *)((long)puVar9 + (ulong)*puVar9);
    }
  }
  if ((*(ushort *)((long)piVar4 - (long)*piVar4) < 0x13) ||
     (uVar2 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[9], uVar2 == 0)) {
    piVar4 = (int *)FUN_00c97360(uVar8,0xb,0);
    if (piVar4 != (int *)0x0) goto LAB_01334314;
LAB_013342f4:
    puVar5 = (undefined8 *)FUN_00cbd3c0();
    uVar11 = *puVar5;
  }
  else {
    piVar4 = (int *)FUN_00c97360(uVar8,0xb,*(undefined4 *)((long)piVar4 + uVar2));
    if (piVar4 == (int *)0x0) goto LAB_013342f4;
LAB_01334314:
    if ((*(ushort *)((long)piVar4 - (long)*piVar4) < 5) ||
       (uVar2 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[2], uVar2 == 0)) {
      uVar11 = 0;
    }
    else {
      uVar11 = *(undefined8 *)((long)piVar4 + uVar2);
    }
  }
  FUN_00cc13b0(lVar10,0xb,uVar11);
  puVar9 = (uint *)((long)piVar6 + (ulong)*(ushort *)((long)piVar6 + (6 - (long)*piVar6)));
  piVar4 = (int *)((long)puVar9 + (ulong)*puVar9);
  if ((*(ushort *)((long)piVar4 - (long)*piVar4) < 7) ||
     (uVar2 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[3], uVar2 == 0)) {
    piVar4 = (int *)FUN_00c97360(uVar8,0xc,0);
    if (piVar4 != (int *)0x0) goto LAB_013343b0;
LAB_01334390:
    puVar5 = (undefined8 *)FUN_00cbd3c0();
    uVar11 = *puVar5;
  }
  else {
    piVar4 = (int *)FUN_00c97360(uVar8,0xc,*(undefined4 *)((long)piVar4 + uVar2));
    if (piVar4 == (int *)0x0) goto LAB_01334390;
LAB_013343b0:
    if ((*(ushort *)((long)piVar4 - (long)*piVar4) < 5) ||
       (uVar2 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[2], uVar2 == 0)) {
      uVar11 = 0;
    }
    else {
      uVar11 = *(undefined8 *)((long)piVar4 + uVar2);
    }
  }
  FUN_00cc13b0(lVar10,0xc,uVar11);
  puVar9 = (uint *)((long)piVar6 + (ulong)*(ushort *)((long)piVar6 + (6 - (long)*piVar6)));
  piVar4 = (int *)((long)puVar9 + (ulong)*puVar9);
  if ((*(ushort *)((long)piVar4 - (long)*piVar4) < 0x21) ||
     (uVar2 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[0x10], uVar2 == 0)) {
    piVar4 = (int *)FUN_00c97360(uVar8,0xd,0);
    if (piVar4 != (int *)0x0) goto LAB_0133444c;
LAB_0133442c:
    puVar5 = (undefined8 *)FUN_00cbd3c0();
    uVar11 = *puVar5;
  }
  else {
    piVar4 = (int *)FUN_00c97360(uVar8,0xd,*(undefined4 *)((long)piVar4 + uVar2));
    if (piVar4 == (int *)0x0) goto LAB_0133442c;
LAB_0133444c:
    if ((*(ushort *)((long)piVar4 - (long)*piVar4) < 5) ||
       (uVar2 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[2], uVar2 == 0)) {
      uVar11 = 0;
    }
    else {
      uVar11 = *(undefined8 *)((long)piVar4 + uVar2);
    }
  }
  FUN_00cc13b0(lVar10,0xd,uVar11);
  puVar9 = (uint *)((long)piVar6 + (ulong)*(ushort *)((long)piVar6 + (6 - (long)*piVar6)));
  piVar6 = (int *)((long)puVar9 + (ulong)*puVar9);
  if ((*(ushort *)((long)piVar6 - (long)*piVar6) < 0x1d) ||
     (uVar2 = (ulong)((ushort *)((long)piVar6 - (long)*piVar6))[0xe], uVar2 == 0)) {
    piVar6 = (int *)FUN_00c97360(uVar8,0xe,0);
    if (piVar6 != (int *)0x0) goto LAB_013344e8;
LAB_013344c8:
    puVar5 = (undefined8 *)FUN_00cbd3c0();
    uVar8 = *puVar5;
  }
  else {
    piVar6 = (int *)FUN_00c97360(uVar8,0xe,*(undefined4 *)((long)piVar6 + uVar2));
    if (piVar6 == (int *)0x0) goto LAB_013344c8;
LAB_013344e8:
    if ((*(ushort *)((long)piVar6 - (long)*piVar6) < 5) ||
       (uVar2 = (ulong)((ushort *)((long)piVar6 - (long)*piVar6))[2], uVar2 == 0)) {
      uVar8 = 0;
    }
    else {
      uVar8 = *(undefined8 *)((long)piVar6 + uVar2);
    }
  }
  FUN_00cc13b0(lVar10,0xe,uVar8);
  plVar13 = *(long **)(param_2 + 8);
  lVar12 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar12 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = plVar13;
  *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
  lVar7 = (**(code **)(*plVar13 + 0x10))(plVar13,0x80,8);
  if (lVar7 == 0) {
    (**(code **)(*plVar13 + 0xb8))(plVar13);
  }
  FUN_0077cea0(lVar7,&DAT_02158b4c);
  *(long **)(lVar7 + 8) = plVar13;
  *(long *)(lVar7 + 0x10) = lVar7;
  *(undefined8 *)(lVar7 + 0x18) = 0x80;
  *(undefined8 *)(lVar7 + 0x20) = 8;
  *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
  if (lVar7 == 0) {
    FUN_00cc12f0(lVar10,0);
  }
  else {
    plVar13 = (long *)(lVar7 + 0x48);
    (**(code **)(*plVar13 + 0x10))(plVar13);
    FUN_00cc12f0(lVar10,lVar7);
    (**(code **)(*plVar13 + 0x18))(plVar13);
  }
joined_r0x01334610:
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
  }
  *param_1 = lVar3;
  return;
}


