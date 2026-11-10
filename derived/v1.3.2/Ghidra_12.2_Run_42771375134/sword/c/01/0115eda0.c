/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0115eda0; name: FUN_0115eda0
 */


void FUN_0115eda0(long param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 local_50 [3];
  long local_38;
  undefined8 local_30;
  long local_28;
  
  uVar1 = FUN_016b8190(*(undefined8 *)(param_1 + 0x730));
  lVar2 = *param_2;
  if (lVar2 == 0x400000000) {
    *(undefined4 *)(param_1 + 0x5e8) = 3;
    FUN_006cf0a0(local_50,&DAT_02678790);
    FUN_016d3620(local_50);
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      local_38 = 0;
      lVar2 = *(long *)(param_1 + 0x4c0);
      goto joined_r0x0115f014;
    }
  }
  else {
    if ((lVar2 == 0x80000000) && ((uVar1 & 0xff00000000) == 0x100000000)) {
      *(undefined4 *)(param_1 + 0x5ec) = 2;
      FUN_006cf0a0(local_50,&DAT_02678790);
      FUN_016d3620(local_50);
      if (local_38 != 0) {
        (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
        local_38 = 0;
      }
      local_50[0] = 0x7c195f9cb3b1c5be;
      FUN_0167ba30(*(undefined8 *)(param_1 + 0x5e0),local_50);
      FUN_0103ec60(*(undefined8 *)(param_1 + 0x708));
    }
    else {
      if ((lVar2 != 0x20000000) || ((uVar1 & 0xff00000000) != 0x100000000)) {
        if (lVar2 == 0x1000000000000) {
          uVar3 = *(undefined8 *)(param_1 + 0x730);
          local_50[0] = FUN_016b8190(uVar3);
          local_28 = FUN_016b7950(uVar3,local_50);
          if (local_28 != 0x4e03795042541b8d) {
            uVar3 = FUN_00ffda40(param_1 + 0x100,&local_28);
            FUN_006cf0a0(local_50,&DAT_02678790);
            FUN_016d3620(local_50);
            if (local_38 != 0) {
              (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
              local_38 = 0;
            }
            FUN_016b3850(uVar3);
          }
        }
        goto LAB_0115f010;
      }
      *(undefined4 *)(param_1 + 0x5ec) = 1;
      FUN_006cf0a0(local_50,&DAT_02678790);
      FUN_016d3620(local_50);
      if (local_38 != 0) {
        (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
        local_38 = 0;
      }
      local_50[0] = 0x32509c05d76e4d0b;
      FUN_0167ba30(*(undefined8 *)(param_1 + 0x5e0),local_50);
      FUN_0103ec30(*(undefined8 *)(param_1 + 0x708));
    }
    local_50[0] = 0x8705d6cdaf0f782c;
    local_28 = *(long *)(param_1 + 0x748);
    if (local_28 != 0) {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x10))();
    }
    local_30 = FUN_0103e730(*(undefined8 *)(param_1 + 0x708));
    FUN_008c4e70(param_1 + 0x100,local_50,&local_28,&local_30,10);
    if (local_28 != 0) {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
      local_28 = 0;
      lVar2 = *(long *)(param_1 + 0x4c0);
      goto joined_r0x0115f014;
    }
  }
LAB_0115f010:
  lVar2 = *(long *)(param_1 + 0x4c0);
joined_r0x0115f014:
  if (lVar2 != 0) {
    FUN_016d2080();
  }
  return;
}


