/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010a22b0; name: FUN_010a22b0
 */


void FUN_010a22b0(long param_1,undefined8 param_2)

{
  void *__src;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined2 uVar8;
  char *pcVar9;
  ulong uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  void *__dest;
  long lVar13;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  char local_140 [4];
  char local_13c;
  undefined1 local_138;
  undefined8 local_134;
  undefined8 local_12c;
  undefined8 local_124;
  undefined4 local_11c;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined5 uStack_100;
  undefined3 local_fb;
  undefined5 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined2 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_70;
  
  pcVar9 = (char *)FUN_01225e80(param_2);
  if (*pcVar9 != '\0') {
    local_13c = pcVar9[4];
    local_138 = pcVar9[8] != '\0';
    if ((bool)local_138) {
      local_134 = *(undefined8 *)(pcVar9 + 0xc);
      local_12c = *(undefined8 *)(pcVar9 + 0x14);
      local_124 = *(undefined8 *)(pcVar9 + 0x1c);
      local_11c = *(undefined4 *)(pcVar9 + 0x24);
    }
    local_118 = *(undefined8 *)(pcVar9 + 0x28);
    local_110 = *(undefined8 *)(pcVar9 + 0x30);
    local_108 = *(undefined8 *)(pcVar9 + 0x38);
    uStack_f8 = (undefined5)((ulong)*(undefined8 *)(pcVar9 + 0x45) >> 0x18);
    uStack_100 = (undefined5)*(undefined8 *)(pcVar9 + 0x40);
    local_fb = (undefined3)((ulong)*(undefined8 *)(pcVar9 + 0x40) >> 0x28);
    local_140[0] = '\x01';
    uVar10 = FUN_0121bb40((ulong)local_140 | 4);
    if ((uVar10 & 1) != 0) {
      FUN_0121bb50((ulong)local_140 | 4);
      pcVar9 = (char *)FUN_01225e60(param_2);
      if (*pcVar9 != '\0') {
        puVar11 = (undefined8 *)FUN_01225e50(param_2);
        local_168 = *puVar11;
        uVar10 = 0;
        local_160 = puVar11[1];
        uStack_158 = puVar11[2];
        local_150 = puVar11[3];
        uStack_148 = puVar11[4];
        puVar11 = (undefined8 *)(param_1 + 0x2048);
        do {
          uVar12 = FUN_0121af80(puVar11 + 0xb);
          if ((((uVar12 & 1) != 0) && (*(int *)((long)puVar11 + 4) != -1)) &&
             (uVar12 = FUN_0121b130(puVar11 + 0xb,&local_168), (uVar12 & 1) != 0)) {
            *(undefined4 *)((long)puVar11 + 4) = 0xffffffff;
            if ((int)uVar10 == 0x31) {
              return;
            }
            local_a0 = *puVar11;
            local_98 = puVar11[1];
            local_90 = puVar11[2];
            local_88 = puVar11[3];
            local_80 = puVar11[4];
            local_78 = puVar11[5];
            local_70 = CONCAT22(local_70._2_2_,*(undefined2 *)(puVar11 + 6));
            uVar6 = *(undefined1 *)((long)puVar11 + 0x41);
            local_f0 = puVar11[10];
            uStack_e8 = puVar11[0xb];
            uVar1 = *(undefined4 *)((long)puVar11 + 0x44);
            uVar2 = *(undefined4 *)(puVar11 + 9);
            uVar3 = *(undefined4 *)((long)puVar11 + 0x4c);
            uVar4 = *(undefined4 *)((long)puVar11 + 0x34);
            uVar8 = *(undefined2 *)(puVar11 + 7);
            uVar5 = *(undefined4 *)((long)puVar11 + 0x3c);
            uVar7 = *(undefined1 *)(puVar11 + 8);
            local_e0 = puVar11[0xc];
            uStack_d8 = puVar11[0xd];
            local_d0 = puVar11[0xe];
            uStack_c8 = puVar11[0xf];
            local_b0 = puVar11[0x12];
            local_c0 = puVar11[0x10];
            local_b8 = puVar11[0x11];
            local_a8 = *(undefined2 *)(puVar11 + 0x13);
            uVar12 = uVar10;
            if ((1U - (int)uVar10 & 1) != 0) {
              uVar12 = uVar10 + 1;
              memcpy(puVar11,puVar11 + 0x14,0x9a);
            }
            if (uVar10 != 0x30) {
              lVar13 = 0x31 - uVar12;
              __dest = (void *)(param_1 + uVar12 * 0xa0 + 0x2048);
              do {
                __src = (void *)((long)__dest + 0xa0);
                memcpy(__dest,__src,0x9a);
                __dest = (void *)((long)__dest + 0x140);
                memcpy(__src,__dest,0x9a);
                lVar13 = lVar13 + -2;
              } while (lVar13 != 0);
            }
            *(undefined8 *)(param_1 + 0x3ef8) = local_90;
            *(undefined8 *)(param_1 + 0x3ef0) = local_98;
            *(undefined8 *)(param_1 + 0x3ee8) = local_a0;
            *(undefined4 *)(param_1 + 0x3f1c) = uVar4;
            *(undefined8 *)(param_1 + 0x3f00) = local_88;
            *(undefined4 *)(param_1 + 0x3f18) = local_70;
            *(undefined8 *)(param_1 + 0x3f10) = local_78;
            *(undefined8 *)(param_1 + 0x3f08) = local_80;
            *(undefined2 *)(param_1 + 0x3f20) = uVar8;
            *(undefined4 *)(param_1 + 0x3f24) = uVar5;
            *(undefined1 *)(param_1 + 0x3f28) = uVar7;
            *(undefined1 *)(param_1 + 0x3f29) = uVar6;
            *(undefined4 *)(param_1 + 0x3f30) = uVar2;
            *(undefined4 *)(param_1 + 0x3f2c) = uVar1;
            *(undefined4 *)(param_1 + 0x3f34) = uVar3;
            *(undefined2 *)(param_1 + 0x3f80) = local_a8;
            *(undefined8 *)(param_1 + 0x3f40) = uStack_e8;
            *(undefined8 *)(param_1 + 0x3f38) = local_f0;
            *(undefined8 *)(param_1 + 0x3f60) = uStack_c8;
            *(undefined8 *)(param_1 + 0x3f58) = local_d0;
            *(undefined8 *)(param_1 + 0x3f50) = uStack_d8;
            *(undefined8 *)(param_1 + 0x3f48) = local_e0;
            *(undefined8 *)(param_1 + 0x3f78) = local_b0;
            *(undefined8 *)(param_1 + 0x3f70) = local_b8;
            *(undefined8 *)(param_1 + 0x3f68) = local_c0;
            return;
          }
          uVar10 = uVar10 + 1;
          puVar11 = puVar11 + 0x14;
        } while (uVar10 < 0x32);
      }
    }
  }
  return;
}


