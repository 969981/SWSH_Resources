/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014c43a0; name: FUN_014c43a0
 */


void FUN_014c43a0(undefined4 *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long *plVar2;
  long local_78 [2];
  undefined1 *local_68;
  long local_60;
  long local_58;
  undefined8 local_48;
  char *pcStack_40;
  undefined8 local_38;
  long local_28;
  
  *param_1 = param_2;
  switch(param_2) {
  case 0:
    *(undefined1 *)(param_1 + 0x48) = 1;
    local_48 = 0xdea6fda2c6554525;
    pcStack_40 = "bin/font/FOT-RodinNTLGPro-DB.BFOTF";
    local_38 = 0x22;
    goto LAB_014c44b4;
  case 1:
    *(undefined1 *)(param_1 + 0x48) = 1;
    local_48 = 0xdb7d3a42d6f4a20;
    pcStack_40 = "bin/font/FOT-UDKakugoC80Pro-DB.BFOTF";
    local_38 = 0x24;
    goto LAB_014c44b4;
  case 2:
    uVar1 = 4;
    param_1[0x49] = 4;
    break;
  case 3:
    param_1[0x49] = 2;
    uVar1 = 2;
    break;
  case 4:
    param_1[0x49] = 1;
    uVar1 = 1;
    break;
  case 5:
    param_1[0x49] = 3;
    uVar1 = 3;
    break;
  case 6:
    *(undefined1 *)(param_1 + 0x48) = 1;
    local_48 = 0xac4c7934a33a32f3;
    pcStack_40 = "bin/font/or_font.BFOTF";
    local_38 = 0x16;
LAB_014c44b4:
    FUN_014bb440(local_78,&local_48);
    FUN_006dccd0(&local_28,*(undefined8 *)PTR_DAT_02710788,1,local_78,0,param_3,param_4);
    if (*(long *)(param_1 + 6) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 6) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 6) = 0;
    }
    *(long *)(param_1 + 6) = local_28;
    if (local_28 != 0) {
      plVar2 = (long *)(local_28 + 0x48);
      (**(code **)(*plVar2 + 0x10))(plVar2);
      if ((*(long *)(param_1 + 8) != 0) || (*(long *)(param_1 + 0x28) != 0)) {
        FUN_006e1e70(local_28,param_1 + 4,1);
      }
      (**(code **)(*plVar2 + 0x18))(plVar2);
    }
    if ((local_60 != 0) && (local_78[0] != 0)) {
      (**(code **)(*(long *)(local_78[0] + 0x48) + 0x18))();
    }
    local_78[0] = 0;
    local_78[1] = 0xcbf29ce484222645;
    local_68 = &DAT_01d38550;
    local_60 = 0;
    if (local_58 != 0) {
      (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    }
switchD_014c43e0_default:
    return;
  default:
    goto switchD_014c43e0_default;
  }
  nn::pl::RequestSharedFontLoad(uVar1);
  return;
}


