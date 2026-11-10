/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01224af0; name: FUN_01224af0
 */


void FUN_01224af0(undefined1 *param_1,char *param_2,long param_3)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  undefined4 local_2f0;
  undefined4 uStack_2ec;
  long local_2e8;
  long local_2e0;
  long local_2d8;
  long local_2d0;
  char local_2c8;
  undefined1 uStack_2c7;
  undefined6 uStack_2c6;
  undefined2 uStack_2c0;
  undefined8 local_2be;
  undefined8 local_2b6;
  undefined8 local_2ae;
  char local_2a4;
  undefined8 local_2a0;
  undefined8 uStack_298;
  char local_290;
  undefined8 local_28c;
  undefined8 local_284;
  undefined8 local_27c;
  undefined8 local_274;
  undefined8 local_26c;
  undefined8 local_264;
  undefined8 local_25c;
  char local_254;
  undefined1 local_250;
  char local_24c;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined4 local_230;
  undefined8 local_22c;
  undefined8 local_224;
  undefined8 local_21c;
  undefined5 local_214;
  undefined3 uStack_20f;
  undefined5 uStack_20c;
  char local_200;
  undefined1 auStack_1f0 [176];
  char local_140;
  undefined8 local_13c;
  undefined8 local_134;
  undefined8 local_12c;
  undefined8 local_124;
  undefined8 local_11c;
  undefined8 local_114;
  undefined8 local_10c;
  undefined8 local_104;
  undefined8 local_fc;
  undefined4 local_f4;
  char local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  long local_88;
  long local_80;
  long lStack_78;
  long local_70;
  long lStack_68;
  
  if (param_3 != 0) {
    plVar2 = (long *)(param_2 + 0x30);
    if ((((*plVar2 != param_3) && (plVar2 = (long *)(param_2 + 0x60), *plVar2 != param_3)) &&
        (plVar2 = (long *)(param_2 + 0x90), *plVar2 != param_3)) &&
       ((plVar2 = (long *)(param_2 + 0xc0), *plVar2 != param_3 &&
        (plVar2 = (long *)(param_2 + 0xf0), *plVar2 != param_3)))) {
      if (*(long *)(param_2 + 0x120) == param_3) {
        plVar2 = (long *)(param_2 + 0x120);
      }
      else if (*(long *)(param_2 + 0x150) == param_3) {
        plVar2 = (long *)(param_2 + 0x150);
      }
      else {
        if (*(long *)(param_2 + 0x180) != param_3) goto LAB_01224f14;
        plVar2 = (long *)(param_2 + 0x180);
      }
    }
    local_88 = plVar2[1];
    local_80 = plVar2[2];
    lStack_78 = plVar2[3];
    local_70 = plVar2[4];
    lStack_68 = plVar2[5];
    lVar3 = *(long *)PTR_DAT_02710958;
    if (lVar3 != 0) {
      if (*param_2 != '\0') {
        local_2c8 = (char)lStack_68;
        uStack_2c7 = (undefined1)((ulong)lStack_68 >> 8);
        uStack_2c6 = (undefined6)((ulong)lStack_68 >> 0x10);
        local_2f0 = CONCAT31(local_2f0._1_3_,1);
        local_2e8 = local_88;
        local_2e0 = local_80;
        local_2d8 = lStack_78;
        local_2d0 = local_70;
        uVar1 = FUN_0121ae60(param_2 + 8,&local_2e8);
        if ((uVar1 & 1) != 0) {
          FUN_01211940(&local_2f0,lVar3);
          *param_1 = 0;
          *(undefined4 *)(param_1 + 0x10) = local_2f0;
          param_1[0x20] = (undefined1)local_2e0;
          param_1[0x28] = 0;
          if ((char)local_2d8 != '\0') {
            *(long *)(param_1 + 0x30) = local_2d0;
            param_1[0x28] = 1;
          }
          param_1[0x38] = 0;
          if (local_2c8 != '\0') {
            *(undefined8 *)(param_1 + 0x4a) = local_2b6;
            *(ulong *)(param_1 + 0x3a) = CONCAT26(uStack_2c0,uStack_2c6);
            *(undefined8 *)(param_1 + 0x52) = local_2ae;
            param_1[0x38] = 1;
            *(undefined8 *)(param_1 + 0x42) = local_2be;
          }
          param_1[0x5c] = 0;
          if (local_2a4 != '\0') {
            *(undefined8 *)(param_1 + 0x60) = local_2a0;
            *(undefined8 *)(param_1 + 0x68) = uStack_298;
            param_1[0x5c] = 1;
          }
          param_1[0x70] = 0;
          if (local_290 != '\0') {
            *(undefined8 *)(param_1 + 0x84) = local_27c;
            *(undefined8 *)(param_1 + 0x7c) = local_284;
            *(undefined8 *)(param_1 + 0x74) = local_28c;
            *(undefined8 *)(param_1 + 0x94) = local_26c;
            *(undefined8 *)(param_1 + 0xa4) = local_25c;
            *(undefined8 *)(param_1 + 0x8c) = local_274;
            *(undefined8 *)(param_1 + 0x9c) = local_264;
            param_1[0x70] = 1;
          }
          param_1[0xac] = 0;
          if (local_254 != '\0') {
            param_1[0xb0] = local_250;
            param_1[0xb4] = 0;
            if (local_24c != '\0') {
              *(undefined8 *)(param_1 + 200) = local_238;
              *(undefined4 *)(param_1 + 0xd0) = local_230;
              *(undefined8 *)(param_1 + 0xb8) = local_248;
              *(undefined8 *)(param_1 + 0xc0) = uStack_240;
              param_1[0xb4] = 1;
            }
            *(undefined8 *)(param_1 + 0xd4) = local_22c;
            *(undefined8 *)(param_1 + 0xe4) = local_21c;
            *(ulong *)(param_1 + 0xf1) = CONCAT53(uStack_20c,uStack_20f);
            *(ulong *)(param_1 + 0xec) = CONCAT35(uStack_20f,local_214);
            *(undefined8 *)(param_1 + 0xdc) = local_224;
            param_1[0xac] = 1;
          }
          param_1[0x100] = 0;
          if (local_200 != '\0') {
            memcpy(param_1 + 0x110,auStack_1f0,0xb0);
            param_1[0x100] = 1;
          }
          param_1[0x1c0] = 0;
          if (local_140 != '\0') {
            *(undefined8 *)(param_1 + 0x1cc) = local_134;
            *(undefined8 *)(param_1 + 0x1c4) = local_13c;
            *(undefined8 *)(param_1 + 0x1ec) = local_114;
            *(undefined8 *)(param_1 + 0x1e4) = local_11c;
            *(undefined8 *)(param_1 + 0x1dc) = local_124;
            *(undefined8 *)(param_1 + 0x1d4) = local_12c;
            *(undefined4 *)(param_1 + 0x20c) = local_f4;
            *(undefined8 *)(param_1 + 0x204) = local_fc;
            *(undefined8 *)(param_1 + 0x1fc) = local_104;
            *(undefined8 *)(param_1 + 500) = local_10c;
            param_1[0x1c0] = 1;
          }
          param_1[0x210] = 0;
          if (local_f0 == '\0') {
            *(undefined8 *)(param_1 + 0x248) = local_b8;
            *(undefined8 *)(param_1 + 600) = local_a8;
            *(undefined8 *)(param_1 + 0x240) = local_c0;
            *(undefined4 *)(param_1 + 0x260) = local_a0;
            *(undefined8 *)(param_1 + 0x250) = local_b0;
            *param_1 = 1;
            return;
          }
          *(undefined8 *)(param_1 + 0x218) = local_e8;
          *(undefined8 *)(param_1 + 0x238) = local_c8;
          *(undefined8 *)(param_1 + 0x230) = local_d0;
          *(undefined8 *)(param_1 + 0x228) = local_d8;
          *(undefined8 *)(param_1 + 0x220) = local_e0;
          param_1[0x210] = 1;
          *(undefined8 *)(param_1 + 0x240) = local_c0;
          *(undefined4 *)(param_1 + 0x260) = local_a0;
          *(undefined8 *)(param_1 + 600) = local_a8;
          *(undefined8 *)(param_1 + 0x250) = local_b0;
          *(undefined8 *)(param_1 + 0x248) = local_b8;
          *param_1 = 1;
          return;
        }
      }
      FUN_01211890(&local_2f0,lVar3,&local_88);
      if (CONCAT44(uStack_2ec,local_2f0) != 0) {
        *param_1 = 0;
        FUN_00c51300(param_1);
        return;
      }
    }
  }
LAB_01224f14:
  *param_1 = 0;
  return;
}


