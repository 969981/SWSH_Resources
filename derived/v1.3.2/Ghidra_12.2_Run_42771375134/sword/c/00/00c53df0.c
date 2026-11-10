/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c53df0; name: FUN_00c53df0
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_00c53df0(long param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  char *pcVar6;
  uint *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 local_2a8;
  undefined1 local_2a0;
  undefined4 local_290 [4];
  undefined1 local_280;
  undefined1 local_278;
  undefined8 local_270;
  undefined1 local_268;
  undefined8 local_266;
  undefined8 local_25e;
  undefined8 local_256;
  undefined8 local_24e;
  undefined1 local_244;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined1 local_230;
  undefined8 local_22c;
  undefined8 local_224;
  undefined8 local_21c;
  undefined8 local_214;
  undefined8 local_20c;
  undefined8 local_204;
  undefined8 local_1fc;
  undefined1 local_1f4;
  undefined1 local_1f0;
  undefined1 local_1ec;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined4 local_1d0;
  undefined8 local_1cc;
  undefined8 local_1c4;
  undefined8 local_1bc;
  undefined5 uStack_1b4;
  undefined3 local_1af;
  undefined5 uStack_1ac;
  undefined1 local_1a0;
  undefined1 auStack_190 [176];
  undefined1 local_e0;
  undefined8 local_dc;
  undefined8 local_d4;
  undefined8 local_cc;
  undefined8 local_c4;
  undefined8 local_bc;
  undefined8 local_b4;
  undefined8 local_ac;
  undefined8 local_a4;
  undefined8 local_9c;
  undefined4 local_94;
  undefined1 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  
  if ((*(long *)(param_1 + 0x68) != 0) &&
     (puVar10 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar10 != (undefined8 *)0x0)) {
    plVar4 = (long *)(**(code **)*puVar10)(puVar10);
    lVar5 = FUN_00c51ea0();
    for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
      if (plVar4 == (long *)lVar5) {
        puVar11 = puVar10 + -10;
        cVar2 = *(char *)(puVar10 + 4);
        goto joined_r0x00c54248;
      }
    }
  }
  puVar11 = (undefined8 *)0x0;
  cVar2 = DAT_00000070;
joined_r0x00c54248:
  if (cVar2 == '\0') {
    return 5;
  }
  local_2a0 = 0;
  local_290[0] = *(undefined4 *)(puVar11 + 0x10);
  local_280 = *(undefined1 *)(puVar11 + 0x12);
  local_278 = *(char *)(puVar11 + 0x13) != '\0';
  if ((bool)local_278) {
    local_270 = puVar11[0x14];
  }
  local_268 = *(char *)(puVar11 + 0x15) != '\0';
  if ((bool)local_268) {
    local_266 = *(undefined8 *)((long)puVar11 + 0xaa);
    local_25e = *(undefined8 *)((long)puVar11 + 0xb2);
    local_256 = *(undefined8 *)((long)puVar11 + 0xba);
    local_24e = *(undefined8 *)((long)puVar11 + 0xc2);
  }
  local_244 = *(char *)((long)puVar11 + 0xcc) != '\0';
  if ((bool)local_244) {
    local_240 = puVar11[0x1a];
    uStack_238 = puVar11[0x1b];
  }
  local_230 = *(char *)(puVar11 + 0x1c) != '\0';
  if ((bool)local_230) {
    local_22c = *(undefined8 *)((long)puVar11 + 0xe4);
    local_224 = *(undefined8 *)((long)puVar11 + 0xec);
    local_21c = *(undefined8 *)((long)puVar11 + 0xf4);
    local_214 = *(undefined8 *)((long)puVar11 + 0xfc);
    local_20c = *(undefined8 *)((long)puVar11 + 0x104);
    local_204 = *(undefined8 *)((long)puVar11 + 0x10c);
    local_1fc = *(undefined8 *)((long)puVar11 + 0x114);
  }
  local_1f4 = 0;
  if (*(char *)((long)puVar11 + 0x11c) != '\0') {
    local_1f0 = *(undefined1 *)(puVar11 + 0x24);
    local_1ec = *(char *)((long)puVar11 + 0x124) != '\0';
    if ((bool)local_1ec) {
      local_1e8 = puVar11[0x25];
      local_1e0 = puVar11[0x26];
      uStack_1d8 = puVar11[0x27];
      local_1d0 = *(undefined4 *)(puVar11 + 0x28);
    }
    local_1cc = *(undefined8 *)((long)puVar11 + 0x144);
    local_1c4 = *(undefined8 *)((long)puVar11 + 0x14c);
    local_1bc = *(undefined8 *)((long)puVar11 + 0x154);
    uStack_1ac = (undefined5)((ulong)*(undefined8 *)((long)puVar11 + 0x161) >> 0x18);
    uStack_1b4 = (undefined5)*(undefined8 *)((long)puVar11 + 0x15c);
    local_1af = (undefined3)((ulong)*(undefined8 *)((long)puVar11 + 0x15c) >> 0x28);
    local_1f4 = 1;
  }
  local_1a0 = 0;
  cVar2 = *(char *)(puVar11 + 0x2e);
  if (cVar2 != '\0') {
    memcpy(auStack_190,puVar11 + 0x30,0xb0);
  }
  local_e0 = *(char *)(puVar11 + 0x46) != '\0';
  if ((bool)local_e0) {
    local_dc = *(undefined8 *)((long)puVar11 + 0x234);
    local_d4 = *(undefined8 *)((long)puVar11 + 0x23c);
    local_bc = *(undefined8 *)((long)puVar11 + 0x254);
    local_b4 = *(undefined8 *)((long)puVar11 + 0x25c);
    local_c4 = *(undefined8 *)((long)puVar11 + 0x24c);
    local_cc = *(undefined8 *)((long)puVar11 + 0x244);
    local_9c = *(undefined8 *)((long)puVar11 + 0x274);
    local_a4 = *(undefined8 *)((long)puVar11 + 0x26c);
    local_ac = *(undefined8 *)((long)puVar11 + 0x264);
    local_94 = *(undefined4 *)((long)puVar11 + 0x27c);
  }
  local_90 = *(char *)(puVar11 + 0x50) != '\0';
  if ((bool)local_90) {
    local_88 = puVar11[0x51];
    local_80 = puVar11[0x52];
    local_78 = puVar11[0x53];
    local_70 = puVar11[0x54];
    local_68 = puVar11[0x55];
  }
  local_58 = puVar11[0x57];
  local_48 = puVar11[0x59];
  local_40 = *(undefined4 *)(puVar11 + 0x5a);
  local_60 = puVar11[0x56];
  local_50 = puVar11[0x58];
  local_2a0 = 1;
  local_1a0 = cVar2 != '\0';
  pcVar6 = (char *)FUN_01225ec0(local_290);
  if (*pcVar6 == '\0') {
LAB_00c54180:
    bVar3 = false;
  }
  else {
    iVar1 = *(int *)(pcVar6 + 4);
    if (iVar1 == 0) {
      uVar8 = 5;
      bVar3 = true;
      goto code_r0x00c5418c;
    }
    puVar7 = (uint *)FUN_01225ed0(local_290);
    uVar8 = 5;
    bVar3 = true;
    if (((*puVar7 & 0xff) == 0) || ((*puVar7 & 0xffff0000) != 0xea7f0000)) goto code_r0x00c5418c;
    local_2a8 = 0;
    bVar3 = true;
    uVar9 = FUN_011fec20(*(undefined8 *)PTR_DAT_02718f20,iVar1,0,1,0x4039000000000000,&local_2a8);
    if ((uVar9 & 1) == 0) goto LAB_00c54180;
  }
  uVar8 = 2;
code_r0x00c5418c:
  if (bVar3) {
    return uVar8;
  }
  return 5;
}


