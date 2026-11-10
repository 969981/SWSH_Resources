/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00215bc0; name: FUN_00215bc0
 */


void FUN_00215bc0(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  *(undefined4 *)(param_1 + 1) = 0x7c;
  *(undefined4 *)(param_1 + 4) = 0x7d;
  puVar1 = PTR_LAB_027117f0;
  *param_1 = "GeometryType";
  puVar2 = PTR_LAB_027117f8;
  param_1[2] = puVar1;
  param_1[3] = "Geometry";
  param_1[5] = puVar2;
  param_1[6] = "LocalPose";
  *(undefined4 *)(param_1 + 7) = 0x7e;
  puVar1 = PTR_LAB_02711800;
  param_1[8] = PTR_LAB_02711808;
  param_1[9] = puVar1;
  param_1[10] = "SimulationFilterData";
  puVar2 = PTR_LAB_02711818;
  puVar1 = PTR_LAB_02711810;
  *(undefined4 *)(param_1 + 0xb) = 0x7f;
  param_1[0xc] = puVar1;
  param_1[0xd] = puVar2;
  param_1[0xe] = "QueryFilterData";
  puVar1 = PTR_LAB_02711820;
  *(undefined4 *)(param_1 + 0xf) = 0x80;
  puVar2 = PTR_LAB_02711828;
  param_1[0x12] = "Materials";
  param_1[0x10] = puVar1;
  param_1[0x11] = puVar2;
  *(undefined4 *)(param_1 + 0x13) = 0x81;
  puVar1 = PTR_LAB_02711840;
  param_1[0x14] = PTR_LAB_02711838;
  param_1[0x15] = puVar1;
  param_1[0x16] = "ContactOffset";
  puVar1 = PTR_LAB_02711830;
  param_1[0x18] = PTR_LAB_02711848;
  param_1[0x19] = puVar1;
  *(undefined4 *)(param_1 + 0x17) = 0x82;
  param_1[0x1a] = "RestOffset";
  puVar1 = PTR_LAB_02711850;
  *(undefined4 *)(param_1 + 0x1b) = 0x83;
  puVar2 = PTR_LAB_02711858;
  param_1[0x1e] = "Flags";
  param_1[0x1c] = puVar1;
  param_1[0x1d] = puVar2;
  *(undefined4 *)(param_1 + 0x1f) = 0x84;
  puVar1 = PTR_LAB_02711868;
  param_1[0x20] = PTR_LAB_02711860;
  param_1[0x21] = puVar1;
  param_1[0x22] = "IsExclusive";
  puVar1 = PTR_LAB_02711870;
  *(undefined4 *)(param_1 + 0x23) = 0x85;
  param_1[0x24] = puVar1;
  param_1[0x25] = &DAT_01d0fc7e;
  puVar1 = PTR_LAB_02711878;
  *(undefined4 *)(param_1 + 0x26) = 0x86;
  puVar2 = PTR_LAB_02711880;
  param_1[0x27] = puVar1;
  param_1[0x28] = puVar2;
  param_1[0x29] = "ConcreteTypeName";
  *(undefined4 *)(param_1 + 0x2a) = 0x87;
  param_1[0x2b] = PTR_LAB_02711890;
  param_1[0x2c] = "UserData";
  puVar2 = PTR_LAB_02711898;
  puVar1 = PTR_LAB_02711888;
  *(undefined4 *)(param_1 + 0x2d) = 0x88;
  param_1[0x2e] = puVar2;
  param_1[0x2f] = puVar1;
  return;
}


