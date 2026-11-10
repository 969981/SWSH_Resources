/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00483010; name: FUN_00483010
 */


uint FUN_00483010(long param_1)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  float fVar9;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_50;
  undefined1 local_48;
  undefined1 local_40;
  undefined8 local_38;
  
  lVar2 = DAT_02738fd0;
  if (*(long *)(param_1 + 0x70) == 0) {
    for (; lVar2 != 0; lVar2 = *(long *)(lVar2 + 0x5000)) {
      if (*(long *)(lVar2 + 0x5010) != 0) goto LAB_004830e8;
    }
    lVar2 = FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,0x5018);
    if (lVar2 != 0) {
      lVar4 = 0;
      lVar6 = 0;
      uVar5 = 0;
      *(undefined8 *)(lVar2 + 0x5000) = 0;
      *(undefined4 *)(lVar2 + 0x5008) = 0;
      *(undefined8 *)(lVar2 + 0x5010) = 0;
      do {
        plVar8 = (long *)(lVar2 + lVar4);
        lVar4 = lVar4 + 0x280;
        *plVar8 = lVar6;
        plVar8[0x28] = (long)(plVar8 + 0x14);
        uVar7 = uVar5 | 3;
        uVar5 = uVar5 + 4;
        lVar6 = lVar2 + uVar7 * 0xa0;
        plVar8[0x14] = (long)plVar8;
        plVar8[0x3c] = (long)(plVar8 + 0x28);
      } while (lVar4 != 0x5000);
      *(long *)(lVar2 + 0x5010) = lVar2 + 0x4f60;
      *(undefined4 *)(lVar2 + 0x5008) = 0x80;
      if (DAT_02738fd0 == 0) {
        DAT_02738fd0 = lVar2;
        *(undefined8 *)(lVar2 + 0x5000) = 0;
        plVar8 = *(long **)(lVar2 + 0x5010);
      }
      else {
        *(long *)(lVar2 + 0x5000) = DAT_02738fd0;
        DAT_02738fd0 = lVar2;
LAB_004830e8:
        plVar8 = *(long **)(lVar2 + 0x5010);
      }
      if (plVar8 != (long *)0x0) {
        if (*plVar8 == 0) {
          *(undefined8 *)(lVar2 + 0x5010) = 0;
        }
        else {
          *(long *)(lVar2 + 0x5010) = *plVar8;
        }
        *(int *)(lVar2 + 0x5008) = *(int *)(lVar2 + 0x5008) + -1;
        *plVar8 = 0;
        plVar8[1] = 0;
        plVar8[2] = 0;
        local_60 = 0;
        local_58 = 0;
        local_50 = 0;
        local_48 = 0xff;
        local_40 = 0xff;
        local_38 = 0;
        FUN_004a4500(plVar8 + 3,&local_60,1);
        *(undefined4 *)(plVar8 + 0x11) = 0;
        *(undefined4 *)(plVar8 + 0xe) = 0;
        plVar8[0xc] = 0;
        plVar8[0xd] = 0;
        plVar8[3] = (long)(PTR_DAT_02713290 + 0x10);
        plVar8[0x12] = 0;
        *(byte *)(plVar8 + 0x13) = *(byte *)(plVar8 + 0x13) | 1;
        uVar1 = *(uint *)(param_1 + 0x9c);
        uVar3 = uVar1 & 0x3ff;
        *(long **)(param_1 + 0x70) = plVar8;
        if (((*(undefined8 **)(param_1 + 0x38) != (undefined8 *)0x0) && (uVar3 != 0)) &&
           (((uint)**(undefined8 **)(param_1 + 0x38) >> 0x10 & 1) != 0)) {
          local_58 = 0;
          local_50 = 0;
          local_48 = 0xff;
          local_40 = 0xff;
          local_38 = 0;
          local_60 = 0;
          fVar9 = (float)FUN_0049d1f0(*(undefined8 *)PTR_DAT_02712b50,param_1 + 0x30,0x10,&local_60)
          ;
          uVar3 = (uint)fVar9;
          uVar1 = *(uint *)(param_1 + 0x9c);
        }
        FUN_004810e0(plVar8 + 3,param_1,0,uVar3,uVar1 >> 10 & 1,uVar1 >> 0xb & 1);
        plVar8[0x12] = 0;
        *(byte *)(plVar8 + 0x13) = *(byte *)(plVar8 + 0x13) & 0xfe | (byte)(uVar1 >> 0xe) & 1;
        if (*(long *)(param_1 + 0x80) == 0) {
          uVar3 = 1;
          lVar2 = *(long *)(param_1 + 0x78);
        }
        else {
          uVar3 = FUN_00483010();
          lVar2 = *(long *)(param_1 + 0x78);
        }
        if (lVar2 != 0) {
          uVar1 = FUN_00483010();
          uVar3 = uVar3 & uVar1;
        }
        goto LAB_0048324c;
      }
    }
    uVar3 = 0;
    *(undefined8 *)(param_1 + 0x70) = 0;
  }
  else {
    uVar3 = 1;
  }
LAB_0048324c:
  return uVar3 & 1;
}


