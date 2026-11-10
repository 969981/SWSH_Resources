/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00217860; name: FUN_00217860
 */


void FUN_00217860(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_LAB_02711cf8;
  *(undefined4 *)(param_1 + 1) = 0xff;
  puVar2 = PTR_LAB_02711d00;
  *param_1 = "NbRows";
  param_1[2] = puVar1;
  param_1[3] = puVar2;
  param_1[4] = "NbColumns";
  puVar1 = PTR_LAB_02711d08;
  *(undefined4 *)(param_1 + 5) = 0x100;
  puVar2 = PTR_LAB_02711d10;
  param_1[8] = "Format";
  param_1[6] = puVar1;
  param_1[7] = puVar2;
  *(undefined4 *)(param_1 + 9) = 0x101;
  puVar1 = PTR_LAB_02711d28;
  param_1[10] = PTR_LAB_02711d20;
  param_1[0xb] = puVar1;
  param_1[0xc] = "Samples";
  puVar1 = PTR_LAB_02711d18;
  param_1[0xe] = PTR_LAB_02711d30;
  param_1[0xf] = puVar1;
  *(undefined4 *)(param_1 + 0xd) = 0x102;
  param_1[0x10] = "Thickness";
  puVar1 = PTR_LAB_02711d38;
  *(undefined4 *)(param_1 + 0x11) = 0x103;
  puVar2 = PTR_LAB_02711d40;
  param_1[0x14] = "ConvexEdgeThreshold";
  param_1[0x12] = puVar1;
  param_1[0x13] = puVar2;
  *(undefined4 *)(param_1 + 0x15) = 0x104;
  puVar1 = PTR_LAB_02711d50;
  param_1[0x16] = PTR_LAB_02711d48;
  param_1[0x17] = puVar1;
  param_1[0x18] = "Flags";
  puVar2 = PTR_LAB_02711d60;
  puVar1 = PTR_LAB_02711d58;
  *(undefined4 *)(param_1 + 0x19) = 0x105;
  param_1[0x1a] = puVar2;
  param_1[0x1b] = puVar1;
  return;
}


