/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0141ecf0; name: FUN_0141ecf0
 */


void FUN_0141ecf0(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  code *pcVar3;
  
  puVar1 = PTR_DAT_02729970 + 0x10;
  puVar2 = PTR_DAT_02729970 + 0xd0;
  param_1[9] = (long)(PTR_DAT_02729970 + 0x90);
  param_1[10] = (long)puVar2;
  pcVar3 = (code *)param_1[0x159];
  *param_1 = (long)puVar1;
  if (pcVar3 != (code *)0x0) {
    param_1[0x15b] = 0;
    param_1[0x15a] = 0;
    param_1[0x159] = 0;
    param_1[0x158] = 0;
    (*pcVar3)(param_1 + 0x15c);
  }
  pcVar3 = (code *)param_1[0x147];
  if (pcVar3 != (code *)0x0) {
    param_1[0x149] = 0;
    param_1[0x148] = 0;
    param_1[0x147] = 0;
    param_1[0x146] = 0;
    (*pcVar3)(param_1 + 0x14a);
  }
  pcVar3 = (code *)param_1[0x137];
  if (pcVar3 != (code *)0x0) {
    param_1[0x139] = 0;
    param_1[0x138] = 0;
    param_1[0x137] = 0;
    param_1[0x136] = 0;
    (*pcVar3)(param_1 + 0x13a);
  }
  pcVar3 = (code *)param_1[0x127];
  if (pcVar3 != (code *)0x0) {
    param_1[0x128] = 0;
    param_1[0x129] = 0;
    param_1[0x126] = 0;
    param_1[0x127] = 0;
    (*pcVar3)(param_1 + 0x12a);
  }
  pcVar3 = (code *)param_1[0x115];
  if (pcVar3 != (code *)0x0) {
    param_1[0x117] = 0;
    param_1[0x116] = 0;
    param_1[0x115] = 0;
    param_1[0x114] = 0;
    (*pcVar3)(param_1 + 0x118);
  }
  if (param_1[0x112] != 0) {
    (**(code **)(*(long *)(param_1[0x112] + 0x48) + 0x18))();
    param_1[0x112] = 0;
  }
  pcVar3 = (code *)param_1[0xfb];
  if (pcVar3 != (code *)0x0) {
    param_1[0xfd] = 0;
    param_1[0xfc] = 0;
    param_1[0xfb] = 0;
    param_1[0xfa] = 0;
    (*pcVar3)(param_1 + 0xfe);
  }
  pcVar3 = (code *)param_1[0xeb];
  if (pcVar3 != (code *)0x0) {
    param_1[0xed] = 0;
    param_1[0xec] = 0;
    param_1[0xeb] = 0;
    param_1[0xea] = 0;
    (*pcVar3)(param_1 + 0xee);
  }
  pcVar3 = (code *)param_1[0xdb];
  if (pcVar3 != (code *)0x0) {
    param_1[0xdd] = 0;
    param_1[0xdc] = 0;
    param_1[0xdb] = 0;
    param_1[0xda] = 0;
    (*pcVar3)(param_1 + 0xde);
  }
  pcVar3 = (code *)param_1[0xcb];
  if (pcVar3 != (code *)0x0) {
    param_1[0xcd] = 0;
    param_1[0xcc] = 0;
    param_1[0xcb] = 0;
    param_1[0xca] = 0;
    (*pcVar3)(param_1 + 0xce);
  }
  pcVar3 = (code *)param_1[0xbb];
  if (pcVar3 != (code *)0x0) {
    param_1[0xbd] = 0;
    param_1[0xbc] = 0;
    param_1[0xbb] = 0;
    param_1[0xba] = 0;
    (*pcVar3)(param_1 + 0xbe);
  }
  pcVar3 = (code *)param_1[0xab];
  if (pcVar3 != (code *)0x0) {
    param_1[0xad] = 0;
    param_1[0xac] = 0;
    param_1[0xab] = 0;
    param_1[0xaa] = 0;
    (*pcVar3)(param_1 + 0xae);
  }
  pcVar3 = (code *)param_1[0x97];
  if (pcVar3 != (code *)0x0) {
    param_1[0x99] = 0;
    param_1[0x98] = 0;
    param_1[0x97] = 0;
    param_1[0x96] = 0;
    (*pcVar3)(param_1 + 0x9a);
  }
  if (param_1[0x88] != 0) {
    (**(code **)(*(long *)(param_1[0x88] + 0x48) + 0x18))();
    param_1[0x88] = 0;
  }
  if (param_1[0x85] != 0) {
    (**(code **)(*(long *)(param_1[0x85] + 0x48) + 0x18))();
    param_1[0x85] = 0;
  }
  if (param_1[0x84] != 0) {
    (**(code **)(*(long *)(param_1[0x84] + 0x48) + 0x18))();
    param_1[0x84] = 0;
  }
  if (param_1[0x81] != 0) {
    (**(code **)(*(long *)(param_1[0x81] + 0x48) + 0x18))();
    param_1[0x81] = 0;
  }
  if (param_1[0x7e] != 0) {
    (**(code **)(*(long *)(param_1[0x7e] + 0x48) + 0x18))();
    param_1[0x7e] = 0;
  }
  if (param_1[0x7b] != 0) {
    (**(code **)(*(long *)(param_1[0x7b] + 0x48) + 0x18))();
    param_1[0x7b] = 0;
  }
  if (param_1[0x78] != 0) {
    (**(code **)(*(long *)(param_1[0x78] + 0x48) + 0x18))();
    param_1[0x78] = 0;
  }
  pcVar3 = (code *)param_1[0x67];
  if (pcVar3 != (code *)0x0) {
    param_1[0x69] = 0;
    param_1[0x68] = 0;
    param_1[0x67] = 0;
    param_1[0x66] = 0;
    (*pcVar3)(param_1 + 0x6a);
  }
  pcVar3 = (code *)param_1[0x55];
  if (pcVar3 != (code *)0x0) {
    param_1[0x57] = 0;
    param_1[0x56] = 0;
    param_1[0x55] = 0;
    param_1[0x54] = 0;
    (*pcVar3)(param_1 + 0x58);
  }
  pcVar3 = (code *)param_1[0x45];
  if (pcVar3 != (code *)0x0) {
    param_1[0x47] = 0;
    param_1[0x46] = 0;
    param_1[0x45] = 0;
    param_1[0x44] = 0;
    (*pcVar3)(param_1 + 0x48);
  }
  pcVar3 = (code *)param_1[0x35];
  if (pcVar3 != (code *)0x0) {
    param_1[0x36] = 0;
    param_1[0x37] = 0;
    param_1[0x34] = 0;
    param_1[0x35] = 0;
    (*pcVar3)(param_1 + 0x38);
  }
  pcVar3 = (code *)param_1[0x25];
  if (pcVar3 != (code *)0x0) {
    param_1[0x26] = 0;
    param_1[0x27] = 0;
    param_1[0x24] = 0;
    param_1[0x25] = 0;
    (*pcVar3)(param_1 + 0x28);
  }
  pcVar3 = (code *)param_1[0x15];
  if (pcVar3 != (code *)0x0) {
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    (*pcVar3)(param_1 + 0x18);
  }
  FUN_00ff6050(param_1);
  return;
}


