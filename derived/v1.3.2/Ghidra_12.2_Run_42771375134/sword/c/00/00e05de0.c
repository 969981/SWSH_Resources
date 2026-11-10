/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e05de0; name: FUN_00e05de0
 */


undefined8
FUN_00e05de0(undefined8 param_1,short param_2,long *param_3,long param_4,long param_5,long param_6,
            uint param_7)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  uint *puVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined1 auStack_90 [8];
  char *local_88;
  long local_78;
  long local_70;
  long local_68;
  uint local_60;
  long local_58;
  
  lVar9 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
  }
  local_68 = -0x340d631b7bddd9bb;
  local_60 = 0;
  if (param_4 == 0) {
    if (param_5 == 0) goto joined_r0x00e06128;
    lVar7 = 0;
    uVar5 = 0;
    uVar8 = 0;
    lVar3 = -0x340d631b7bddd9bb;
    do {
      lVar1 = param_5 + 0x26 + lVar7;
      if ((((((*(short *)(lVar1 + -0x12) == param_2) || (*(short *)(lVar1 + -0xc) == param_2)) ||
            (*(short *)(lVar1 + -6) == param_2)) ||
           ((*(short *)(param_5 + 0x26 + lVar7) == param_2 || (*(short *)(lVar1 + 6) == param_2))))
          || ((*(short *)(lVar1 + 0xc) == param_2 ||
              ((*(short *)(lVar1 + 0x12) == param_2 || (*(short *)(lVar1 + 0x18) == param_2)))))) ||
         ((*(short *)(lVar1 + 0x1e) == param_2 || (*(short *)(lVar1 + 0x24) == param_2)))) {
        lVar3 = *param_3;
        uVar5 = uVar5 | 1 << (ulong)(uVar8 & 0x1f);
        local_68 = lVar3;
        local_60 = uVar5;
      }
      lVar7 = lVar7 + 0x3e;
      uVar8 = uVar8 + 1;
    } while (lVar7 != 0x22e);
  }
  else {
    lVar7 = 0;
    uVar5 = 0;
    uVar8 = 0;
    lVar3 = -0x340d631b7bddd9bb;
    do {
      lVar1 = param_4 + 0x26 + lVar7;
      if ((((((*(short *)(lVar1 + -0x12) == param_2) || (*(short *)(lVar1 + -0xc) == param_2)) ||
            (*(short *)(lVar1 + -6) == param_2)) ||
           (((*(short *)(param_4 + 0x26 + lVar7) == param_2 || (*(short *)(lVar1 + 6) == param_2))
            || ((*(short *)(lVar1 + 0xc) == param_2 ||
                ((*(short *)(lVar1 + 0x12) == param_2 || (*(short *)(lVar1 + 0x18) == param_2)))))))
           ) || (*(short *)(lVar1 + 0x1e) == param_2)) || (*(short *)(lVar1 + 0x24) == param_2)) {
        lVar3 = *param_3;
        uVar5 = uVar5 | 1 << (ulong)(uVar8 & 0x1f);
        local_68 = lVar3;
        local_60 = uVar5;
      }
      lVar7 = lVar7 + 0x3e;
      uVar8 = uVar8 + 1;
    } while (lVar7 != 0x22e);
    if (((((*(short *)(param_4 + 0x242) == param_2) || (*(short *)(param_4 + 0x248) == param_2)) ||
         (*(short *)(param_4 + 0x24e) == param_2)) ||
        (((*(short *)(param_4 + 0x254) == param_2 || (*(short *)(param_4 + 0x25a) == param_2)) ||
         (((*(short *)(param_4 + 0x260) == param_2 ||
           ((*(short *)(param_4 + 0x266) == param_2 || (*(short *)(param_4 + 0x26c) == param_2))))
          || (*(short *)(param_4 + 0x272) == param_2)))))) ||
       (*(short *)(param_4 + 0x278) == param_2)) {
      lVar3 = *param_3;
      uVar5 = uVar5 | 0x200;
      local_68 = lVar3;
      local_60 = uVar5;
    }
    if (((((*(short *)(param_4 + 0x280) == param_2) || (*(short *)(param_4 + 0x286) == param_2)) ||
         (*(short *)(param_4 + 0x28c) == param_2)) ||
        ((*(short *)(param_4 + 0x292) == param_2 || (*(short *)(param_4 + 0x298) == param_2)))) ||
       (((*(short *)(param_4 + 0x29e) == param_2 ||
         ((*(short *)(param_4 + 0x2a4) == param_2 || (*(short *)(param_4 + 0x2aa) == param_2)))) ||
        ((*(short *)(param_4 + 0x2b0) == param_2 || (*(short *)(param_4 + 0x2b6) == param_2)))))) {
      lVar3 = *param_3;
      local_60 = uVar5 | 0x400;
      local_68 = lVar3;
    }
  }
  if ((lVar3 != -0x340d631b7bddd9bb) && (lVar3 != 0)) {
    local_70 = FUN_010096d0(lVar9,&local_68);
    if ((local_70 != -0x340d631b7bddd9bb) && (local_70 != 0)) {
      if (*(long *)(lVar9 + 0x688) == 0) {
        plVar2 = (long *)FUN_01028290();
        local_58 = *plVar2;
        if (local_58 != 0) {
          (**(code **)(*(long *)(local_58 + 0x48) + 0x10))();
        }
      }
      else {
        FUN_006e7120(&local_58,*(long *)(lVar9 + 0x688),&local_70);
      }
      FUN_006cf0c0(auStack_90,&local_58);
      if (local_58 != 0) {
        (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
        local_58 = 0;
      }
      if (*local_88 != '\0') {
        local_68 = local_70;
      }
      if (local_78 != 0) {
        (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
        local_78 = 0;
      }
    }
    if (param_7 != 0) {
      uVar6 = 0;
      puVar4 = (uint *)(param_6 + 8);
      do {
        if (*(long *)(puVar4 + -2) == local_68) {
          uVar10 = 0;
          *puVar4 = *puVar4 | local_60;
          goto joined_r0x00e0622c;
        }
        if (*(long *)(puVar4 + -2) == -0x340d631b7bddd9bb) {
          uVar10 = 1;
          *puVar4 = local_60;
          *(long *)(puVar4 + -2) = local_68;
          goto joined_r0x00e0622c;
        }
        uVar6 = uVar6 + 1;
        puVar4 = puVar4 + 4;
      } while (uVar6 < param_7);
    }
  }
joined_r0x00e06128:
  uVar10 = 0;
joined_r0x00e0622c:
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
  }
  return uVar10;
}


