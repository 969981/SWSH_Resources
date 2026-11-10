/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01559bf0; name: FUN_01559bf0
 */


uint FUN_01559bf0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char *pcVar1;
  code *pcVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  undefined *local_238;
  undefined *local_230;
  undefined8 local_228;
  undefined *local_220;
  long lStack_218;
  long local_210;
  undefined1 local_208;
  undefined *local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  char local_1e8;
  char local_1e7;
  char local_1e6;
  char local_1e5;
  char local_1e4;
  char local_1e3;
  char local_1e2;
  char local_1e1;
  char local_1e0;
  char local_1df;
  char local_1de;
  char local_1dd;
  char local_1dc;
  char local_1db;
  char local_1da;
  char local_1d9;
  char local_1d8;
  char local_1d7;
  char local_1d6;
  char local_1d5;
  char local_1d4;
  char local_1d3;
  char local_1d2;
  char local_1d1;
  char local_1d0;
  char local_1cf;
  char local_1ce;
  char local_1cd;
  char local_1cc;
  char local_1cb;
  char local_1ca;
  char local_1c9;
  long local_1c8 [2];
  Sha256Impl aSStack_1b8 [120];
  undefined *local_140;
  long local_138;
  long local_130;
  code *local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined1 auStack_110 [96];
  long local_b0;
  code *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [96];
  
  local_a0 = 0;
  uStack_98 = 0;
  local_b0 = 0;
  local_a8 = (code *)0x0;
  local_120 = 0;
  uStack_118 = 0;
  local_140 = PTR_DAT_02710ac8 + 0x10;
  local_130 = 0;
  local_128 = (code *)0x0;
  FUN_006dccd0(local_1c8,*(undefined8 *)PTR_DAT_02710788,0,param_3,0,param_2,0);
  local_138 = local_1c8[0];
  if (local_1c8[0] == 0) {
    uVar3 = 0;
  }
  else {
    plVar5 = (long *)(local_1c8[0] + 0x48);
    (**(code **)(*plVar5 + 0x10))(plVar5);
    if ((local_130 != 0) || (local_b0 != 0)) {
      FUN_006e1e70(local_1c8[0],&local_140,1);
    }
    FUN_006e1be0(local_1c8[0]);
    (**(code **)(*plVar5 + 0x18))(plVar5);
    FUN_01562ca0(local_1c8);
    FUN_01562cb0(local_1c8);
    FUN_01562d20(local_1c8,*(undefined8 *)(local_138 + 400),*(long *)(local_138 + 0x180) + -0x20,0);
    FUN_01562d70(&local_1e8,local_1c8);
    lVar4 = *(long *)(local_138 + 0x180) + -0x20;
    pcVar1 = (char *)(*(long *)(local_138 + 400) + lVar4);
    if ((((((((*pcVar1 == local_1e8) && (pcVar1[1] == local_1e7)) && (pcVar1[2] == local_1e6)) &&
           (((pcVar1[3] == local_1e5 && (pcVar1[4] == local_1e4)) &&
            ((pcVar1[5] == local_1e3 && ((pcVar1[6] == local_1e2 && (pcVar1[7] == local_1e1))))))))
          && (pcVar1[8] == local_1e0)) &&
         ((((((pcVar1[9] == local_1df && (pcVar1[10] == local_1de)) && (pcVar1[0xb] == local_1dd))
            && ((pcVar1[0xc] == local_1dc && (pcVar1[0xd] == local_1db)))) &&
           (pcVar1[0xe] == local_1da)) &&
          (((pcVar1[0xf] == local_1d9 && (pcVar1[0x10] == local_1d8)) &&
           (((pcVar1[0x11] == local_1d7 &&
             (((pcVar1[0x12] == local_1d6 && (pcVar1[0x13] == local_1d5)) &&
              (pcVar1[0x14] == local_1d4)))) &&
            (((pcVar1[0x15] == local_1d3 && (pcVar1[0x16] == local_1d2)) &&
             (pcVar1[0x17] == local_1d1)))))))))) &&
        (((pcVar1[0x18] == local_1d0 && (pcVar1[0x19] == local_1cf)) &&
         ((pcVar1[0x1a] == local_1ce &&
          (((pcVar1[0x1b] == local_1cd && (pcVar1[0x1c] == local_1cc)) &&
           (pcVar1[0x1d] == local_1cb)))))))) &&
       ((pcVar1[0x1e] == local_1ca && (pcVar1[0x1f] == local_1c9)))) {
      local_228 = 0;
      local_238 = PTR_DAT_0272ae68 + 0x10;
      local_208 = 0;
      local_220 = PTR_DAT_0272a778 + 0x10;
      local_200 = &DAT_0217318c;
      uStack_1f8 = 0x7f;
      local_1f0 = 0;
      local_230 = PTR_DAT_0272ae70 + 0x10;
      lStack_218 = *(long *)(local_138 + 400);
      local_210 = lVar4;
      uVar3 = FUN_0155a030(param_1,&local_238);
    }
    else {
      uVar3 = 0;
    }
    nn::crypto::detail::Sha256Impl::~Sha256Impl(aSStack_1b8);
  }
  local_140 = PTR_DAT_02710a48 + 0x10;
  if (local_138 == 0) {
    local_138 = 0;
    pcVar2 = local_a8;
  }
  else {
    FUN_006e2100(local_138,&local_140);
    lVar4 = local_138;
    local_138 = 0;
    pcVar2 = local_a8;
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))();
      pcVar2 = local_a8;
    }
  }
  local_a8 = pcVar2;
  if (pcVar2 != (code *)0x0) {
    local_a0 = 0;
    uStack_98 = 0;
    local_b0 = 0;
    local_a8 = (code *)0x0;
    (*pcVar2)(auStack_90);
  }
  pcVar2 = local_128;
  if (local_128 != (code *)0x0) {
    local_120 = 0;
    uStack_118 = 0;
    local_130 = 0;
    local_128 = (code *)0x0;
    (*pcVar2)(auStack_110);
  }
  if (local_138 != 0) {
    (**(code **)(*(long *)(local_138 + 0x48) + 0x18))();
  }
  return uVar3 & 1;
}


