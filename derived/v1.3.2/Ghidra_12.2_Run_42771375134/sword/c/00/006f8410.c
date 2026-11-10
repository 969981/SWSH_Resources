/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006f8410; name: FUN_006f8410
 */


void FUN_006f8410(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long local_60;
  undefined8 local_58;
  ulong local_50;
  ulong local_48;
  ulong local_40;
  undefined4 local_34;
  long local_28;
  
  FUN_006f8770();
  puVar1 = PTR_DAT_027157c8 + 0x10;
  param_1[9] = (long)(PTR_DAT_027157c8 + 0x40);
  *param_1 = (long)puVar1;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  puVar1 = PTR_DAT_02710860;
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if ((lVar3 != 0) && (*(long *)(lVar3 + 0x80) != 0)) {
    lVar3 = *(long *)(lVar3 + *(long *)(lVar3 + 0x80) * 8 + -8);
    if (lVar3 != 0) goto LAB_006f8474;
  }
  lVar3 = FUN_0075ecb0();
LAB_006f8474:
  param_1[0x28] = lVar3;
  param_1[0x29] = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0;
  param_1[0x2b] = 0;
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
  if (((lVar3 == 0) || (*(long *)(lVar3 + 0x80) == 0)) ||
     (lVar3 = *(long *)(lVar3 + *(long *)(lVar3 + 0x80) * 8 + -8), lVar3 == 0)) {
    lVar3 = FUN_0075ecb0();
  }
  param_1[0x2c] = lVar3;
  param_1[0x2d] = 0;
  *(undefined4 *)(param_1 + 0x2e) = 0;
  param_1[0x2f] = 0;
  *(undefined4 *)(param_1 + 0x30) = 0x3f800000;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
  if (((lVar3 == 0) || (*(long *)(lVar3 + 0x80) == 0)) ||
     (lVar3 = *(long *)(lVar3 + *(long *)(lVar3 + 0x80) * 8 + -8), lVar3 == 0)) {
    lVar3 = FUN_0075ecb0();
  }
  param_1[0x34] = lVar3;
  param_1[0x35] = 0;
  *(undefined4 *)(param_1 + 0x36) = 0;
  param_1[0x37] = 0;
  puVar2 = PTR_DAT_027155e8;
  puVar1 = PTR_DAT_02713a38;
  local_34 = 0;
  (**(code **)PTR_DAT_02713a38)(*(undefined8 *)PTR_DAT_027155e8,0x12,&local_34);
  (**(code **)puVar1)(*(undefined8 *)puVar2,0x25,&local_58);
  local_48 = 0;
  local_40 = 0;
  local_58 = 0;
  local_50 = 0;
  FUN_0199bf30(&local_58);
  local_58 = CONCAT71(local_58._1_7_,2);
  local_58 = CONCAT44(0x1000,(undefined4)local_58);
  FUN_006f88a0(param_1,&local_58,local_34);
  local_48 = 0;
  local_40 = 0;
  local_58 = 0;
  local_50 = 0;
  FUN_0199bfe0(&local_58);
  lVar5 = ((((((((((((((((((((((((((((((((local_58 & 0xff ^ 0xcbf29ce484222645) * 0x100000001b3 ^
                                        local_58 >> 8 & 0xff) * 0x100000001b3 ^
                                       local_58 >> 0x10 & 0xff) * 0x100000001b3 ^
                                      local_58 >> 0x18 & 0xff) * 0x100000001b3 ^
                                     local_58 >> 0x20 & 0xff) * 0x100000001b3 ^
                                    local_58 >> 0x28 & 0xff) * 0x100000001b3 ^
                                   local_58 >> 0x30 & 0xff) * 0x100000001b3 ^ local_58 >> 0x38) *
                                  0x100000001b3 ^ local_50 & 0xff) * 0x100000001b3 ^
                                local_50 >> 8 & 0xff) * 0x100000001b3 ^ local_50 >> 0x10 & 0xff) *
                               0x100000001b3 ^ local_50 >> 0x18 & 0xff) * 0x100000001b3 ^
                             local_50 >> 0x20 & 0xff) * 0x100000001b3 ^ local_50 >> 0x28 & 0xff) *
                            0x100000001b3 ^ local_50 >> 0x30 & 0xff) * 0x100000001b3 ^
                          local_50 >> 0x38) * 0x100000001b3 ^ local_48 & 0xff) * 0x100000001b3 ^
                        local_48 >> 8 & 0xff) * 0x100000001b3 ^ local_48 >> 0x10 & 0xff) *
                       0x100000001b3 ^ local_48 >> 0x18 & 0xff) * 0x100000001b3 ^
                     local_48 >> 0x20 & 0xff) * 0x100000001b3 ^ local_48 >> 0x28 & 0xff) *
                    0x100000001b3 ^ local_48 >> 0x30 & 0xff) * 0x100000001b3 ^ local_48 >> 0x38) *
                  0x100000001b3 ^ local_40 & 0xff) * 0x100000001b3 ^ local_40 >> 8 & 0xff) *
                0x100000001b3 ^ local_40 >> 0x10 & 0xff) * 0x100000001b3 ^ local_40 >> 0x18 & 0xff)
              * 0x100000001b3 ^ local_40 >> 0x20 & 0xff) * 0x100000001b3 ^ local_40 >> 0x28 & 0xff)
            * 0x100000001b3 ^ local_40 >> 0x30 & 0xff) * 0x100000001b3 ^ local_40 >> 0x38) *
          0x100000001b3;
  local_28 = lVar5;
  FUN_006f8c40(&local_60,param_1);
  lVar3 = local_60;
  plVar4 = (long *)FUN_006f8d80(param_1 + 0x26,&local_28);
  *plVar4 = lVar3;
  if (param_1[0x37] != 0) {
    (**(code **)(*(long *)(param_1[0x37] + 0x48) + 0x18))();
    param_1[0x37] = 0;
  }
  param_1[0x37] = local_60;
  FUN_006fa3c0(local_60,param_1 + 10,&local_58,lVar5);
  return;
}


