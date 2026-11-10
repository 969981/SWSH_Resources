/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00214dc0; name: FUN_00214dc0
 */


void FUN_00214dc0(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  *(undefined4 *)(param_1 + 1) = 0x17;
  *(undefined4 *)(param_1 + 4) = 0x18;
  *param_1 = "Scene";
  param_1[2] = PTR_LAB_027113d8;
  param_1[3] = &DAT_01d0fc7e;
  puVar1 = PTR_LAB_027113e8;
  param_1[5] = PTR_LAB_027113e0;
  param_1[6] = puVar1;
  param_1[7] = "ActorFlags";
  puVar1 = PTR_LAB_027113f0;
  param_1[9] = PTR_LAB_027113f8;
  param_1[10] = puVar1;
  *(undefined4 *)(param_1 + 8) = 0x19;
  param_1[0xb] = "DominanceGroup";
  puVar1 = PTR_LAB_02711400;
  *(undefined4 *)(param_1 + 0xc) = 0x1a;
  puVar2 = PTR_LAB_02711408;
  param_1[0xf] = "OwnerClient";
  param_1[0xd] = puVar1;
  param_1[0xe] = puVar2;
  *(undefined4 *)(param_1 + 0x10) = 0x1b;
  puVar1 = PTR_LAB_02711418;
  param_1[0x11] = PTR_LAB_02711410;
  param_1[0x12] = puVar1;
  param_1[0x13] = "ClientBehaviorFlags";
  puVar1 = PTR_LAB_02711428;
  param_1[0x15] = PTR_LAB_02711420;
  param_1[0x16] = puVar1;
  *(undefined4 *)(param_1 + 0x14) = 0x1c;
  param_1[0x17] = "Aggregate";
  puVar1 = PTR_LAB_02711430;
  *(undefined4 *)(param_1 + 0x18) = 0x1d;
  param_1[0x19] = puVar1;
  param_1[0x1a] = "UserData";
  *(undefined4 *)(param_1 + 0x1b) = 0x1e;
  puVar1 = PTR_LAB_02711440;
  param_1[0x1c] = PTR_LAB_02711438;
  param_1[0x1d] = puVar1;
  param_1[0x1e] = "GlobalPose";
  puVar1 = PTR_LAB_02711458;
  param_1[0x20] = PTR_LAB_02711450;
  param_1[0x21] = puVar1;
  *(undefined4 *)(param_1 + 0x1f) = 0x21;
  param_1[0x22] = "Shapes";
  puVar2 = PTR_LAB_02711460;
  *(undefined4 *)(param_1 + 0x23) = 0x22;
  puVar1 = PTR_LAB_02711448;
  param_1[0x26] = "Constraints";
  param_1[0x24] = puVar2;
  param_1[0x25] = puVar1;
  *(undefined4 *)(param_1 + 0x27) = 0x23;
  puVar1 = PTR_LAB_02711470;
  param_1[0x28] = PTR_LAB_02711468;
  param_1[0x29] = puVar1;
  param_1[0x2a] = "ConcreteTypeName";
  *(undefined4 *)(param_1 + 0x2b) = 0x40;
  param_1[0x2c] = PTR_LAB_027115b8;
  return;
}


