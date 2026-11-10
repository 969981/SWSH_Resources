/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0109e790; name: FUN_0109e790
 */


void FUN_0109e790(long param_1,undefined4 param_2)

{
  long lVar1;
  ulong uVar2;
  byte *pbVar3;
  undefined8 uVar4;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  ulong local_98 [12];
  undefined4 local_38;
  
  lVar1 = *(long *)(param_1 + 0x138);
  local_b8 = *(undefined8 *)(lVar1 + 0x678);
  uStack_b0 = *(undefined8 *)(lVar1 + 0x680);
  local_a8 = *(undefined8 *)(lVar1 + 0x688);
  uStack_a0 = *(undefined8 *)(lVar1 + 0x690);
  uVar4 = *(undefined8 *)(lVar1 + 0x5e0);
  FUN_0077eb10(*(undefined8 *)(param_1 + 0x130),&local_b8,uVar4);
  local_38 = 0;
  local_98[10] = 0;
  local_98[0xb] = 0;
  local_98[8] = 0;
  local_98[9] = 0;
  local_98[6] = 0;
  local_98[7] = 0;
  local_98[4] = 0;
  local_98[5] = 0;
  local_98[2] = 0;
  local_98[3] = 0;
  local_98[0] = 0;
  local_98[1] = 0;
  if (*(char *)(param_1 + 0x60) == '\0') {
    snprintf((char *)local_98,100,"pane_%s","T_lv_00");
  }
  else {
    snprintf((char *)local_98,100,"pane_%s_%s",(char *)(param_1 + 0x60),"T_lv_00");
  }
  uVar2 = 0xcbf29ce484222645;
  if ((byte)local_98[0] != 0) {
    pbVar3 = (byte *)((ulong)local_98 | 1);
    do {
      uVar2 = (uVar2 ^ (byte)local_98[0]) * 0x100000001b3;
      local_98[0]._0_1_ = *pbVar3;
      pbVar3 = pbVar3 + 1;
    } while ((byte)local_98[0] != 0);
  }
  local_98[0] = uVar2;
  FUN_00a10f20(lVar1 + 0x100,local_98,uVar4,0,param_2);
  *(undefined4 *)(param_1 + 0x14c) = param_2;
  return;
}


