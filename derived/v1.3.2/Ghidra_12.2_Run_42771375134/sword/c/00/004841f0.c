/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004841f0; name: FUN_004841f0
 */


uint FUN_004841f0(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  ushort *puVar6;
  float *pfVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  long local_70;
  undefined4 local_68;
  undefined4 local_60;
  undefined1 local_58;
  undefined1 local_50;
  undefined8 local_48;
  
  if (*(long *)(param_1 + 0x60) == 0) {
    uVar8 = 0;
    lVar4 = *(long *)(param_1 + 0x38);
  }
  else {
    uVar8 = *(byte *)(*(long *)(param_1 + 0x60) + 0x24) >> 4 & 1;
    lVar4 = *(long *)(param_1 + 0x38);
  }
  if (((lVar4 != 0) && ((*(byte *)(lVar4 + 4) >> 1 & 1) != 0)) ||
     (uVar2 = (**(code **)(*(long *)(param_1 + 0x18) + 0x20))((long *)(param_1 + 0x18),0x21),
     (uVar2 & 1) != 0)) {
    plVar3 = (long *)(param_1 + 0x18);
    local_68 = 0;
    local_60 = 0;
    local_58 = 0xff;
    local_50 = 0xff;
    local_48 = 0;
    local_70 = param_2;
    uVar2 = (**(code **)(*plVar3 + 0x20))(plVar3,0x21);
    fVar10 = 0.0;
    if ((((uVar2 & 1) != 0) && (uVar2 = FUN_004b3450(plVar3), (uVar2 & 1) != 0)) &&
       ((uVar2 = (**(code **)(*plVar3 + 0x28))(plVar3,0x21), (uVar2 & 1) != 0 &&
        ((plVar3 = (long *)(**(code **)(*plVar3 + 0x80))(plVar3), plVar3 != (long *)0x0 &&
         (lVar4 = *plVar3, lVar4 != 0)))))) {
      fVar10 = 0.0;
      do {
        puVar6 = *(ushort **)(lVar4 + 0x20);
        if (puVar6 != (ushort *)0x0) {
          uVar2 = 0;
          pfVar7 = (float *)((long)puVar6 + ((ulong)((uint)*puVar6 * 2 + 5) & 0x3fffc));
          do {
            if (puVar6[uVar2 + 1] == 0x21) {
              if (pfVar7 != (float *)0x0) {
                fVar10 = *pfVar7 + fVar10;
              }
              break;
            }
            uVar2 = uVar2 + 1;
            pfVar7 = pfVar7 + 4;
          } while (uVar2 < *puVar6);
        }
        lVar4 = *(long *)(lVar4 + 0x10);
      } while (lVar4 != 0);
    }
    if ((*(long *)(param_1 + 0x38) != 0) &&
       ((*(byte *)(*(long *)(param_1 + 0x38) + 4) >> 1 & 1) != 0)) {
      fVar9 = (float)FUN_0049d1f0(*(undefined8 *)PTR_DAT_02712b50,param_1 + 0x30,0x21,&local_70);
      fVar10 = fVar9 + fVar10;
    }
    return (int)fVar10;
  }
  plVar3 = *(long **)(param_1 + 0x58);
  if (plVar3 != (long *)0x0) {
    plVar5 = (long *)*plVar3;
    uVar1 = *(uint *)(plVar3 + 1);
    plVar3 = plVar5;
    if (uVar1 == 0) {
LAB_004843b0:
      if (plVar3 != plVar5 + (ulong)uVar1 * 2) {
        lVar4 = plVar3[1];
        goto LAB_004843cc;
      }
    }
    else {
      lVar4 = (ulong)uVar1 << 4;
      do {
        if (*plVar3 == param_2) goto LAB_004843b0;
        lVar4 = lVar4 + -0x10;
        plVar3 = plVar3 + 2;
      } while (lVar4 != 0);
    }
  }
  lVar4 = *(long *)(param_1 + 0x50);
  if (lVar4 == 0) {
    return uVar8;
  }
LAB_004843cc:
  return *(byte *)(lVar4 + 0x20) >> 4 & 1;
}


