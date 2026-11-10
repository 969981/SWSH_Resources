/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01150290; name: FUN_01150290
 */


void FUN_01150290(long param_1,char *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 local_188;
  long local_180;
  undefined8 local_178;
  long local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_132;
  undefined8 local_12a;
  undefined8 local_122;
  undefined8 local_11a;
  undefined8 local_112;
  undefined8 local_10a;
  undefined8 local_102;
  undefined8 local_fa;
  undefined8 local_f2;
  undefined8 local_ea;
  undefined8 local_e2;
  undefined8 local_da;
  undefined8 local_d2;
  undefined8 local_ca;
  undefined8 local_c2;
  undefined8 local_ba;
  undefined8 local_b2;
  undefined8 local_aa;
  undefined8 local_a2;
  undefined8 local_9a;
  undefined8 local_92;
  undefined8 local_8a;
  undefined8 local_82;
  undefined8 local_7a;
  undefined8 local_72;
  undefined8 local_6a;
  undefined8 local_62;
  undefined8 local_5a;
  undefined8 local_52;
  undefined8 local_4a;
  undefined8 local_42;
  undefined8 local_3a;
  
  if (*param_2 == '\0') {
    if (*(char *)(param_1 + 0xda8) != '\0') {
      if (*(long *)(param_1 + 0xdc8) != 0) {
        (**(code **)(*(long *)(*(long *)(param_1 + 0xdc8) + 0x48) + 0x18))();
        *(undefined8 *)(param_1 + 0xdc8) = 0;
      }
      if (*(long *)(param_1 + 0xdb8) != 0) {
        (**(code **)(*(long *)(*(long *)(param_1 + 0xdb8) + 0x48) + 0x18))();
        *(undefined8 *)(param_1 + 0xdb8) = 0;
      }
      *(undefined1 *)(param_1 + 0xda8) = 0;
    }
  }
  else {
    local_3a = 0;
    local_42 = 0;
    local_4a = 0;
    local_52 = 0;
    local_5a = 0;
    local_62 = 0;
    local_6a = 0;
    local_72 = 0;
    local_7a = 0;
    local_8a = 0;
    local_92 = 0;
    local_9a = 0;
    local_a2 = 0;
    local_aa = 0;
    local_b2 = 0;
    local_ba = 0;
    local_c2 = 0;
    local_ca = 0;
    local_d2 = 0;
    local_82 = 0;
    local_da = 0;
    local_e2 = 0;
    local_ea = 0;
    local_f2 = 0;
    local_fa = 0;
    local_102 = 0;
    local_10a = 0;
    local_112 = 0;
    local_11a = 0;
    local_122 = 0;
    local_12a = 0;
    local_132 = 0;
    local_170 = 0;
    local_188 = 0;
    local_180 = 0;
    local_148 = 0;
    uStack_140 = 0;
    local_158 = 0;
    uStack_150 = 0;
    local_168 = 0;
    uStack_160 = 0;
    FUN_015f9390(&local_188,*(undefined8 *)(param_1 + 0x58));
    lVar1 = local_180;
    if (*(char *)(param_1 + 0xda8) == '\0') {
      *(undefined8 *)(param_1 + 0xdb0) = local_188;
      *(long *)(param_1 + 0xdb8) = local_180;
      if (local_180 != 0) {
        (**(code **)(*(long *)(local_180 + 0x48) + 0x10))();
      }
      *(undefined8 *)(param_1 + 0xdc0) = local_178;
      *(long *)(param_1 + 0xdc8) = local_170;
      if (local_170 != 0) {
        (**(code **)(*(long *)(local_170 + 0x48) + 0x10))();
      }
      memcpy((void *)(param_1 + 0xdd0),&local_168,0x136);
      *(undefined1 *)(param_1 + 0xda8) = 1;
    }
    else {
      *(undefined8 *)(param_1 + 0xdb0) = local_188;
      if (local_180 != 0) {
        (**(code **)(*(long *)(local_180 + 0x48) + 0x10))();
      }
      lVar2 = *(long *)(param_1 + 0xdb8);
      *(long *)(param_1 + 0xdb8) = lVar1;
      if (lVar2 != 0) {
        (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
      }
      lVar1 = local_170;
      *(undefined8 *)(param_1 + 0xdc0) = local_178;
      if (local_170 != 0) {
        (**(code **)(*(long *)(local_170 + 0x48) + 0x10))();
      }
      lVar2 = *(long *)(param_1 + 0xdc8);
      *(long *)(param_1 + 0xdc8) = lVar1;
      if (lVar2 != 0) {
        (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
      }
      memcpy((void *)(param_1 + 0xdd0),&local_168,0x136);
    }
    *(undefined8 *)(param_1 + 0xdb0) = *(undefined8 *)(param_2 + 8);
    FUN_0077d2f0(*(undefined8 *)(param_1 + 0xdb8),*(undefined8 *)(param_2 + 0x10));
    *(char *)(param_1 + 0xdc0) = param_2[0x18];
    *(undefined4 *)(param_1 + 0xdc4) = *(undefined4 *)(param_2 + 0x1c);
    (**(code **)(**(long **)(param_1 + 0xdc8) + 0x68))
              (*(long **)(param_1 + 0xdc8),*(undefined8 *)(param_2 + 0x20));
    *(undefined8 *)(param_1 + 0xdd0) = *(undefined8 *)(param_2 + 0x28);
    *(undefined8 *)(param_1 + 0xdd8) = *(undefined8 *)(param_2 + 0x30);
    *(undefined8 *)(param_1 + 0xde0) = *(undefined8 *)(param_2 + 0x38);
    *(undefined8 *)(param_1 + 0xde8) = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_1 + 0xdf0) = *(undefined8 *)(param_2 + 0x48);
    *(undefined8 *)(param_1 + 0xdf8) = *(undefined8 *)(param_2 + 0x50);
    *(char *)(param_1 + 0xe00) = param_2[0x58];
    *(char *)(param_1 + 0xe01) = param_2[0x59];
    *(char *)(param_1 + 0xe02) = param_2[0x5a];
    *(char *)(param_1 + 0xe03) = param_2[0x5b];
    *(char *)(param_1 + 0xe04) = param_2[0x5c];
    *(char *)(param_1 + 0xe05) = param_2[0x5d];
    memcpy((void *)(param_1 + 0xe06),param_2 + 0x5e,0x100);
    if (local_170 != 0) {
      (**(code **)(*(long *)(local_170 + 0x48) + 0x18))();
      local_170 = 0;
    }
    if (local_180 != 0) {
      (**(code **)(*(long *)(local_180 + 0x48) + 0x18))();
    }
  }
  return;
}


