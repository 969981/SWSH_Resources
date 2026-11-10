/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dfb690; name: FUN_00dfb690
 */


void FUN_00dfb690(long param_1,uint param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  float extraout_s0;
  float fVar5;
  float extraout_var;
  float fVar6;
  float fVar7;
  undefined8 extraout_var_00;
  undefined8 local_f30;
  undefined8 uStack_f28;
  undefined4 local_f14;
  undefined1 auStack_f10 [32];
  undefined8 local_ef0;
  undefined8 local_ec0;
  undefined8 local_e90;
  undefined8 local_e60;
  undefined8 local_e30;
  undefined8 local_e00;
  undefined8 local_dd0;
  undefined8 local_da0;
  undefined8 local_d90;
  undefined8 local_d88;
  undefined1 auStack_d80 [32];
  undefined8 local_d60;
  undefined8 local_d30;
  undefined8 local_d00;
  undefined8 local_cd0;
  undefined8 local_ca0;
  undefined8 local_c70;
  undefined8 local_c40;
  undefined8 local_c10;
  undefined8 local_c00;
  undefined4 local_bf8;
  undefined8 local_bf0;
  undefined4 local_be0;
  undefined4 local_b70;
  undefined4 local_b60;
  undefined8 local_b50;
  undefined8 local_b48;
  undefined8 local_b40;
  undefined8 local_b38;
  undefined8 local_b30;
  undefined8 local_b28;
  undefined8 local_b20;
  undefined8 local_b18;
  undefined8 local_b10;
  undefined8 local_b08;
  undefined4 local_b00;
  undefined4 local_a90;
  undefined4 local_a80;
  undefined4 local_a10;
  undefined4 local_a00;
  undefined4 local_990;
  undefined4 local_980;
  undefined4 local_910;
  undefined4 local_900;
  undefined4 local_890;
  undefined4 local_880;
  undefined4 local_810;
  undefined4 local_800;
  undefined4 local_790;
  undefined4 local_780;
  undefined4 local_710;
  undefined1 local_700;
  undefined1 local_6f0 [8];
  float fStack_6e8;
  long *local_48;
  
  if (*(int *)(param_1 + 0x6c) != 0) {
    return;
  }
  if (*(long *)(param_1 + 0x50) == 0) {
    return;
  }
  if (*(int *)(*(long *)(param_1 + 0x50) + 0x54) == 0) {
    return;
  }
  lVar3 = *(long *)(param_1 + 0xa0);
  if (lVar3 == 0) {
    return;
  }
  if (*(char *)(lVar3 + 0x290) == '\0') {
    return;
  }
  if (*(char *)(lVar3 + 0x291) == '\0') {
    return;
  }
  FUN_00a658b0(&local_48);
  uVar2 = (**(code **)(*local_48 + 0x188))();
  if ((uVar2 & 1) != 0) {
    if ((*(int *)(local_48[0x98] + 0x54) == 3) && (uVar2 = FUN_00e8ff40(local_48), (uVar2 & 1) == 0)
       ) {
      *(undefined1 *)(local_48 + 0xa4) = 0;
    }
    else {
      plVar4 = local_48;
      memcpy(local_6f0,(void *)(param_1 + 0xb0),0x6a0);
      local_d60 = 0;
      local_d30 = 0;
      local_d90 = 0;
      local_d88 = 0;
      local_d00 = 0;
      local_cd0 = 0;
      local_ca0 = 0;
      local_c70 = 0;
      local_c40 = 0;
      local_c10 = 0;
      local_c00 = 0;
      local_bf8 = 0;
      local_bf0 = 0xcbf29ce484222645;
      local_be0 = 0;
      local_b70 = 0;
      local_b60 = 0;
      local_a90 = 0;
      local_a80 = 0;
      local_a10 = 0;
      local_a00 = 0;
      local_990 = 0;
      local_980 = 0;
      local_910 = 0;
      local_900 = 0;
      local_890 = 0;
      local_880 = 0;
      local_810 = 0;
      local_800 = 0;
      local_790 = 0;
      local_780 = 0;
      local_710 = 0;
      local_700 = 0;
      local_b00 = 0;
      local_b08 = 0;
      local_b10 = 0;
      local_b18 = 0;
      local_b20 = 0;
      local_b28 = 0;
      local_b30 = 0;
      local_b38 = 0;
      local_b40 = 0;
      local_b48 = 0;
      local_b50 = 0;
      local_ef0 = 0;
      local_ec0 = 0;
      local_e90 = 0;
      local_e60 = 0;
      local_e30 = 0;
      local_e00 = 0;
      local_dd0 = 0;
      local_da0 = 0;
      local_f14 = 0;
      lVar3 = plVar4[0x75];
      if (lVar3 != 0) {
        plVar4 = (long *)(lVar3 + 0x48);
        (**(code **)(*plVar4 + 0x10))(plVar4);
        if (*(int *)(lVar3 + 0x54) != 0) {
          (**(code **)(*local_48 + 0x178))();
          fVar5 = extraout_s0 + (float)local_48[0xb2];
          fVar6 = extraout_var + (float)((ulong)local_48[0xb2] >> 0x20);
          fVar7 = (float)extraout_var_00 + (float)local_48[0xb3];
          uStack_f28 = CONCAT44((float)((ulong)extraout_var_00 >> 0x20) +
                                (float)((ulong)local_48[0xb3] >> 0x20),fVar7);
          local_f30 = CONCAT44(fVar6,fVar5);
          if ((((fVar5 != local_6f0._0_4_) || (fVar6 != local_6f0._4_4_)) || (fVar7 != fStack_6e8))
             || ((param_2 & 1) != 0)) {
            uVar1 = FUN_00e01360(*(undefined8 *)(param_1 + 0xa0),&local_f30,auStack_f10);
            local_d88 = uStack_f28;
            local_d90 = local_f30;
            local_f14 = uVar1;
            (**(code **)(*plVar4 + 0x18))(plVar4);
            lVar3 = *(long *)(param_1 + 0xa0);
            if ((0 < *(int *)(lVar3 + 0x2d8)) ||
               (0 < (int)((ulong)(*(long *)(lVar3 + 0x2e8) - *(long *)(lVar3 + 0x2e0)) >> 3))) {
              FUN_00e016a0(lVar3,auStack_f10,&local_f14);
              uVar1 = local_f14;
            }
            local_c00 = CONCAT44(local_c00._4_4_,uVar1);
            memcpy(auStack_d80,auStack_f10,0x180);
            FUN_00dfb9c0(param_1,&local_d90,local_6f0,0);
            FUN_00dfc210(param_1,&local_d90,local_6f0,param_2 & 1);
            memcpy((void *)(param_1 + 0xb0),&local_d90,0x691);
            goto joined_r0x00dfb950;
          }
        }
        (**(code **)(*plVar4 + 0x18))(plVar4);
      }
    }
  }
joined_r0x00dfb950:
  if (local_48 != (long *)0x0) {
    (**(code **)(local_48[9] + 0x18))(local_48 + 9);
  }
  return;
}


