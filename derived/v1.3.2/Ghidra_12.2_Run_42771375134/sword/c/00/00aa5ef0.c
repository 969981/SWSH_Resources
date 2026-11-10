/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00aa5ef0; name: FUN_00aa5ef0
 */


void FUN_00aa5ef0(ulong param_1)

{
  undefined2 *puVar1;
  code **ppcVar2;
  byte *__s;
  uint uVar3;
  byte bVar4;
  char *pcVar5;
  ulong uVar6;
  long lVar7;
  code **ppcVar8;
  long lVar9;
  code *pcVar10;
  ulong uVar11;
  byte *pbVar12;
  long *plVar13;
  undefined8 uVar14;
  code *pcVar15;
  long *plVar16;
  long lVar17;
  code *local_170;
  code *local_168;
  code *local_160;
  undefined1 *local_158;
  ulong local_150;
  ulong local_148;
  undefined4 local_140;
  ulong local_e8;
  byte *pbStack_e0;
  size_t local_d8;
  long local_d0;
  code *local_c8;
  code *local_c0;
  code *local_b8;
  undefined1 *local_b0;
  ulong local_a8;
  undefined4 local_a0;
  long local_98;
  undefined8 uStack_90;
  undefined1 *local_88;
  long local_80;
  long local_78;
  undefined4 local_70;
  
  uVar11 = *(ulong *)(*(long *)(param_1 + 8) + 0xd8);
  lVar17 = 0;
  uVar6 = param_1;
  ppcVar8 = (code **)PTR_PTR_02710928;
  do {
    lVar7 = param_1 + lVar17 * 0x230;
    if (*(short *)(lVar7 + 0x24c) != 0xf9) {
      puVar1 = (undefined2 *)(lVar7 + 0x24c);
      uVar3 = *(uint *)(param_1 + lVar17 * 0x230 + 0x248);
      if (uVar3 == 0xff) {
        plVar13 = (long *)0x0;
      }
      else {
        plVar13 = *(long **)(*(long *)(param_1 + 8) + (ulong)uVar3 * 8 + 0x548);
        if (plVar13 != (long *)0x0) {
          (**(code **)(plVar13[9] + 0x10))();
          uVar6 = (**(code **)(*plVar13 + 400))(plVar13);
          if (((uVar6 & 1) != 0) && (uVar6 = FUN_00ad59f0(plVar13), (uVar6 & 0xff) != 0)) {
            uVar6 = FUN_00a7b120(*(undefined8 *)(param_1 + 8),*puVar1);
            *puVar1 = (short)uVar6;
          }
        }
      }
      FUN_00aa6d50(&local_98,uVar6,*puVar1);
      if (local_80 == 0) {
        local_c8 = (code *)0x0;
        local_c0 = (code *)0xcbf29ce484222645;
        local_b8 = (code *)&DAT_01d38550;
        local_a0 = 0;
        local_b0 = (undefined1 *)0x0;
        local_a8 = 0;
        uVar14 = *(undefined8 *)(param_1 + 8);
LAB_00aa60a8:
        ppcVar8 = &local_b8;
      }
      else {
        ppcVar2 = ppcVar8;
        if (local_98 != 0) {
          ppcVar2 = (code **)(local_98 + 0x60);
        }
        local_170 = *ppcVar2;
        FUN_00a8d290(&local_c8,&local_170,&DAT_01d38550,local_70);
        uVar14 = *(undefined8 *)(param_1 + 8);
        if (local_b0 == (undefined1 *)0x0) goto LAB_00aa60a8;
        if (local_c8 != (code *)0x0) {
          ppcVar8 = (code **)(local_c8 + 0x60);
        }
      }
      pcVar5 = strrchr((char *)*ppcVar8,0x2f);
      __s = (byte *)0x0;
      if (pcVar5 != (char *)0x0) {
        __s = (byte *)(pcVar5 + 1);
      }
      local_d8 = strlen((char *)__s);
      bVar4 = *__s;
      local_e8 = 0xcbf29ce484222645;
      if (bVar4 != 0) {
        local_e8 = 0xcbf29ce484222645;
        pbVar12 = __s;
        do {
          pbVar12 = pbVar12 + 1;
          local_e8 = (local_e8 ^ bVar4) * 0x100000001b3;
          bVar4 = *pbVar12;
        } while (bVar4 != 0);
      }
      local_d0 = 0;
      pbStack_e0 = __s;
      FUN_00a69d70(&local_170,uVar14,&local_e8);
      if ((local_b0 != (undefined1 *)0x0) && (local_c8 != (code *)0x0)) {
        (**(code **)(*(long *)(local_c8 + 0x48) + 0x18))();
      }
      local_c8 = (code *)0x0;
      local_c0 = (code *)0xcbf29ce484222645;
      local_b8 = (code *)&DAT_01d38550;
      local_b0 = (undefined1 *)0x0;
      if (local_a8 != 0) {
        (**(code **)(*(long *)(local_a8 + 0x48) + 0x18))();
      }
      local_a8 = local_150;
      local_c0 = local_168;
      local_b8 = local_160;
      local_150 = 0;
      local_b0 = local_158;
      local_a0 = (undefined4)local_148;
      if (local_158 == (undefined1 *)0x0) {
        local_c8 = local_170;
      }
      else {
        if (local_c8 != (code *)0x0) {
          (**(code **)(*(long *)(local_c8 + 0x48) + 0x18))();
        }
        local_c8 = local_170;
      }
      local_170 = (code *)0x0;
      local_168 = (code *)0xcbf29ce484222645;
      local_160 = (code *)&DAT_01d38550;
      local_158 = (undefined1 *)0x0;
      if (local_150 != 0) {
        (**(code **)(*(long *)(local_150 + 0x48) + 0x18))();
      }
      local_150 = 0;
      local_148 = local_148 & 0xffffffff00000000;
      if (local_d0 != 0) {
        (**(code **)(*(long *)(local_d0 + 0x48) + 0x18))();
        local_d0 = 0;
      }
      lVar7 = param_1 + lVar17 * 0x230;
      FUN_006dccd0(&local_170,*(undefined8 *)PTR_DAT_02710788,1,&local_c8,0,uVar11,0);
      if (*(long *)(lVar7 + 0x138) != 0) {
        (**(code **)(*(long *)(*(long *)(lVar7 + 0x138) + 0x48) + 0x18))();
        *(long *)(lVar7 + 0x138) = 0;
      }
      pcVar10 = local_170;
      *(long *)(lVar7 + 0x138) = (long)local_170;
      if (local_170 != (code *)0x0) {
        pcVar15 = local_170 + 0x48;
        (**(code **)(*(long *)pcVar15 + 0x10))(pcVar15);
        if ((*(long *)(param_1 + lVar17 * 0x230 + 0x140) != 0) ||
           (*(long *)(param_1 + lVar17 * 0x230 + 0x1c0) != 0)) {
          FUN_006e1e70(pcVar10,lVar7 + 0x130,1);
        }
        (**(code **)(*(long *)pcVar15 + 0x18))(pcVar15);
      }
      local_170 = (code *)&LAB_00aa7750;
      local_168 = FUN_00aa78e0;
      lVar9 = param_1 + lVar17 * 0x230;
      local_140 = (undefined4)lVar17;
      local_160 = FUN_00aa78f0;
      local_158 = &LAB_00aa7910;
      pcVar10 = *(code **)(lVar9 + 0x148);
      local_150 = param_1;
      local_148 = uVar11;
      if (pcVar10 == (code *)0x0) {
LAB_00aa5f70:
        (*local_160)(&local_150,param_1 + lVar17 * 0x230 + 0x160);
        *(undefined1 **)(lVar9 + 0x158) = local_158;
        *(code **)(lVar9 + 0x148) = local_168;
        *(code **)(lVar9 + 0x150) = local_160;
        *(undefined8 *)(lVar9 + 0x140) = local_170;
        lVar9 = *(long *)(param_1 + lVar17 * 0x230 + 0x138);
      }
      else {
        *(undefined8 *)(lVar9 + 0x150) = 0;
        *(undefined8 *)(lVar9 + 0x158) = 0;
        *(undefined8 *)(lVar9 + 0x140) = 0;
        *(undefined8 *)(lVar9 + 0x148) = 0;
        (*pcVar10)(param_1 + lVar17 * 0x230 + 0x160);
        if (local_160 != (code *)0x0) goto LAB_00aa5f70;
        lVar9 = *(long *)(param_1 + lVar17 * 0x230 + 0x138);
      }
      if (lVar9 != 0) {
        plVar16 = (long *)(lVar9 + 0x48);
        (**(code **)(*plVar16 + 0x10))(plVar16);
        FUN_006e1e70(lVar9,lVar7 + 0x130,1);
        (**(code **)(*plVar16 + 0x18))(plVar16);
      }
      pcVar10 = local_168;
      if (local_168 != (code *)0x0) {
        local_160 = (code *)0x0;
        local_158 = (undefined1 *)0x0;
        local_170 = (code *)0x0;
        local_168 = (code *)0x0;
        (*pcVar10)(&local_150);
      }
      ppcVar8 = (code **)PTR_PTR_02710928;
      if ((local_b0 != (undefined1 *)0x0) && (local_c8 != (code *)0x0)) {
        (**(code **)(*(long *)(local_c8 + 0x48) + 0x18))();
      }
      local_c8 = (code *)0x0;
      local_c0 = (code *)0xcbf29ce484222645;
      local_b8 = (code *)&DAT_01d38550;
      local_b0 = (undefined1 *)0x0;
      if (local_a8 != 0) {
        (**(code **)(*(long *)(local_a8 + 0x48) + 0x18))();
        local_a8 = 0;
      }
      if ((local_80 != 0) && (local_98 != 0)) {
        (**(code **)(*(long *)(local_98 + 0x48) + 0x18))();
      }
      local_98 = 0;
      uStack_90 = 0xcbf29ce484222645;
      local_88 = &DAT_01d38550;
      local_80 = 0;
      uVar6 = 0;
      if (local_78 != 0) {
        uVar6 = (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
        local_78 = 0;
      }
      if (plVar13 != (long *)0x0) {
        uVar6 = (**(code **)(plVar13[9] + 0x18))(plVar13 + 9);
      }
    }
    lVar17 = lVar17 + 1;
    if (lVar17 == 5) {
      return;
    }
  } while( true );
}


