/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bb8680; name: FUN_00bb8680
 */


undefined4 FUN_00bb8680(long param_1,int param_2,uint param_3,uint param_4)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  ulong uVar4;
  ushort *puVar5;
  long lVar6;
  bool bVar7;
  long lVar8;
  
  uVar1 = *(ushort *)(param_1 + 0x6d8);
  if (uVar1 == 0) {
    uVar4 = 0;
LAB_00bb86f4:
    if ((uint)uVar4 != (uint)uVar1) {
      return 4;
    }
  }
  else {
    uVar4 = 0;
    puVar5 = (ushort *)(*(long *)(param_1 + 0x6d0) + 6);
    do {
      if (((*(int *)(puVar5 + -3) == param_2) && (puVar5[-1] == param_3)) && (*puVar5 == param_4))
      goto LAB_00bb86f4;
      uVar4 = uVar4 + 1;
      puVar5 = puVar5 + 4;
    } while (uVar4 < uVar1);
  }
  lVar8 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
  }
  lVar6 = *(long *)(*(long *)PTR_DAT_02710798 + 0x228);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
  }
  if (param_2 == 1) {
    if (param_3 == 0) goto LAB_00bb87f4;
    iVar2 = param_3 - 1;
  }
  else {
    if (param_2 != 0) {
LAB_00bb87f4:
      uVar3 = 0;
      goto joined_r0x00bb87f8;
    }
    uVar4 = FUN_0150a730(lVar6,param_3,param_4,0);
    bVar7 = false;
    if ((uVar4 & 1) != 0) {
      uVar4 = FUN_0150aec0(lVar6,0);
      if ((uVar4 & 1) == 0) {
        bVar7 = true;
        goto LAB_00bb8790;
      }
LAB_00bb8888:
      uVar3 = 2;
      goto joined_r0x00bb87f8;
    }
LAB_00bb8790:
    uVar4 = FUN_0150a730(lVar6,param_3,param_4,1);
    if ((uVar4 & 1) != 0) {
      bVar7 = true;
      uVar4 = FUN_0150aec0(lVar6,1);
      if ((uVar4 & 1) != 0) {
        uVar3 = 2;
        goto joined_r0x00bb87f8;
      }
    }
    uVar4 = FUN_0150a730(lVar6,param_3,param_4,2);
    if ((uVar4 & 1) != 0) {
      uVar4 = FUN_0150aec0(lVar6,2);
      if ((uVar4 & 1) != 0) goto LAB_00bb8888;
      bVar7 = true;
    }
    uVar4 = FUN_0150a730(lVar6,param_3,param_4,3);
    if ((uVar4 & 1) != 0) {
      uVar4 = FUN_0150aec0(lVar6,3);
      if ((uVar4 & 1) != 0) goto LAB_00bb8888;
      bVar7 = true;
    }
    uVar4 = FUN_0150a730(lVar6,param_3,param_4,4);
    if ((uVar4 & 1) != 0) {
      uVar4 = FUN_0150aec0(lVar6,4);
      if ((uVar4 & 1) != 0) goto LAB_00bb8888;
      bVar7 = true;
    }
    uVar4 = FUN_0150a730(lVar6,param_3,param_4,5);
    if ((uVar4 & 1) == 0) {
      if (bVar7) {
        uVar3 = 1;
      }
      else {
        uVar4 = FUN_00bcd4d0(*(undefined8 *)(param_1 + 0x5e8),0,param_3,param_4);
        uVar3 = 3;
        if ((uVar4 & 1) == 0) {
          uVar3 = 0;
        }
      }
      goto joined_r0x00bb87f8;
    }
    iVar2 = 5;
  }
  uVar4 = FUN_0150aec0(lVar6,iVar2);
  uVar3 = 1;
  if ((uVar4 & 1) != 0) {
    uVar3 = 2;
  }
joined_r0x00bb87f8:
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  }
  return uVar3;
}


