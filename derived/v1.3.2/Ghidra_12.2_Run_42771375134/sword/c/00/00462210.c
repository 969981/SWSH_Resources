/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00462210; name: FUN_00462210
 */


undefined8 FUN_00462210(long param_1,ushort param_2,int param_3,float *param_4)

{
  long *plVar1;
  ulong uVar2;
  ushort *puVar3;
  long *plVar4;
  long lVar5;
  float *pfVar6;
  float fVar7;
  undefined4 local_70;
  undefined4 uStack_6c;
  ushort local_68;
  float local_64;
  
  plVar4 = (long *)(*(long *)(param_1 + 0x10) + 0x18);
  plVar1 = (long *)(**(code **)(*plVar4 + 0x80))(plVar4);
  if (param_3 == 3) {
    if (plVar1 == (long *)0x0) {
      return 0;
    }
    lVar5 = *plVar1;
    if (lVar5 == 0) {
      return 0;
    }
    do {
      puVar3 = *(ushort **)(lVar5 + 0x20);
      fVar7 = 1.0;
      if (puVar3 != (ushort *)0x0) {
        uVar2 = 0;
        pfVar6 = (float *)((long)puVar3 + ((ulong)((uint)*puVar3 * 2 + 5) & 0x3fffc));
        do {
          if (puVar3[uVar2 + 1] == param_2) {
            fVar7 = 1.0;
            if (pfVar6 != (float *)0x0) {
              uVar2 = FUN_004b3450(plVar4);
              fVar7 = 1.0;
              if ((uVar2 & 1) != 0) {
                fVar7 = *pfVar6;
              }
            }
            goto LAB_004622dc;
          }
          uVar2 = uVar2 + 1;
          pfVar6 = pfVar6 + 4;
        } while (uVar2 < *puVar3);
        fVar7 = 1.0;
      }
LAB_004622dc:
      uStack_6c = *(undefined4 *)(lVar5 + 0x38);
      local_70 = 2;
      local_68 = param_2;
      local_64 = fVar7;
      FUN_00461f30(param_1 + 0x48,&local_70);
      *param_4 = *param_4 * fVar7;
      lVar5 = *(long *)(lVar5 + 0x10);
    } while (lVar5 != 0);
  }
  else {
    if (plVar1 == (long *)0x0) {
      return 0;
    }
    lVar5 = *plVar1;
    if (lVar5 == 0) {
      return 0;
    }
    do {
      puVar3 = *(ushort **)(lVar5 + 0x20);
      fVar7 = 0.0;
      if (puVar3 != (ushort *)0x0) {
        uVar2 = 0;
        pfVar6 = (float *)((long)puVar3 + ((ulong)((uint)*puVar3 * 2 + 5) & 0x3fffc));
        do {
          if (puVar3[uVar2 + 1] == param_2) {
            fVar7 = 0.0;
            if (pfVar6 != (float *)0x0) {
              uVar2 = FUN_004b3450(plVar4);
              fVar7 = 0.0;
              if ((uVar2 & 1) != 0) {
                fVar7 = *pfVar6;
              }
            }
            goto LAB_00462390;
          }
          uVar2 = uVar2 + 1;
          pfVar6 = pfVar6 + 4;
        } while (uVar2 < *puVar3);
        fVar7 = 0.0;
      }
LAB_00462390:
      uStack_6c = *(undefined4 *)(lVar5 + 0x38);
      local_70 = 2;
      local_68 = param_2;
      local_64 = fVar7;
      FUN_00461f30(param_1 + 0x48,&local_70);
      *param_4 = *param_4 + fVar7;
      lVar5 = *(long *)(lVar5 + 0x10);
    } while (lVar5 != 0);
  }
  return 1;
}


