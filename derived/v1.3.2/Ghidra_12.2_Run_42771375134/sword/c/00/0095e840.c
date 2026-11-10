/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0095e840; name: FUN_0095e840
 */


ulong FUN_0095e840(undefined8 param_1,undefined8 *param_2,byte *param_3,undefined8 param_4,
                  undefined4 *param_5,undefined2 *param_6)

{
  char cVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  uint local_a0;
  undefined2 local_9c;
  undefined4 local_9a;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  byte *local_60;
  byte *local_58;
  undefined4 *puStack_50;
  undefined8 local_48;
  
  uVar3 = FUN_0093b420(param_2[4]);
  if ((int)uVar3 == 0) {
    return uVar3;
  }
  iVar2 = FUN_00880b40(*(undefined4 *)param_2[1]);
  if (iVar2 == 9) {
    local_80 = *param_2;
    local_88 = param_2[1];
    local_90 = param_2[3];
    local_78 = param_2[4];
    local_a0 = local_a0 & 0xffff0000;
    local_70 = param_4;
    FUN_00942450(param_1);
    uVar4 = FUN_00925420();
    FUN_0095f600(uVar4,&local_a0,&local_90);
    uVar3 = 0;
LAB_0095e8c8:
    *param_6 = (undefined2)local_a0;
  }
  else {
    cVar1 = FUN_0093b430(param_2[4]);
    if (param_3[3] == 0) {
      local_90 = *param_2;
      local_80 = param_2[1];
      local_88 = param_2[2];
      local_78 = param_2[3];
      if ((cVar1 != '\x01') || (*param_3 < 2)) {
        local_68 = param_2[4];
        local_70 = CONCAT71(local_70._1_7_,*(undefined1 *)(param_2 + 5));
        local_60 = (byte *)param_4;
        local_58 = param_3;
        puStack_50 = param_5;
        FUN_00942390(param_1);
        local_48 = FUN_009319d0();
        local_9c = 0;
        local_a0 = 0;
        FUN_00942450(param_1);
        uVar4 = FUN_00925480();
        FUN_00967cd0(uVar4,&local_a0,&local_90);
        uVar3 = (ulong)local_a0;
        local_a0._0_2_ = local_9c;
        goto LAB_0095e8c8;
      }
    }
    else {
      local_90 = *param_2;
      local_80 = param_2[1];
      local_88 = param_2[2];
      local_78 = param_2[3];
    }
    local_70 = param_2[4];
    local_9c = 0;
    local_68 = param_4;
    local_60 = param_3;
    FUN_0095ee00((ulong)&local_a0 | 6);
    FUN_00942450(param_1);
    uVar4 = FUN_00925430();
    FUN_00960a20(uVar4,&local_a0,&local_90);
    uVar3 = (ulong)local_a0;
    *param_6 = local_9c;
    *param_5 = local_9a;
  }
  return uVar3;
}


