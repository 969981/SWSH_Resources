/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0089b740; name: FUN_0089b740
 */


undefined8 FUN_0089b740(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  
  if (*(long *)(param_1 + 0x98) == 0) {
    plVar2 = (long *)FUN_00ff5cf0(param_1);
    lVar3 = FUN_00ff5cf0(param_1);
    plVar4 = (long *)(**(code **)(*plVar2 + 0x10))(plVar2,0xca0,0x10);
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (0xf < *(ulong *)(lVar5 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = plVar2;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
    puVar1 = PTR_DAT_027176d0;
    plVar4[0x26] = 0;
    plVar4[0x27] = 0;
    plVar4[0x24] = 0;
    plVar4[0x25] = 0;
    plVar4[0x16] = 0;
    plVar4[0x17] = 0;
    *plVar4 = (long)(puVar1 + 0x10);
    plVar4[1] = lVar3;
    puVar1 = PTR_DAT_027176d8;
    plVar4[0x14] = 0;
    plVar4[0x15] = 0;
    plVar4[0x59] = 0;
    plVar4[0x58] = 0;
    plVar4[0x57] = 0;
    puVar1 = puVar1 + 0x10;
    plVar4[0x12] = (long)puVar1;
    plVar4[0x13] = 0;
    plVar4[0x44] = (long)puVar1;
    plVar4[0x76] = (long)puVar1;
    plVar4[0xa8] = (long)puVar1;
    plVar4[0xda] = (long)puVar1;
    plVar4[0x10c] = (long)puVar1;
    plVar4[0x13e] = (long)puVar1;
    plVar4[0x170] = (long)puVar1;
    plVar4[0x56] = 0;
    plVar4[0x49] = 0;
    plVar4[0x48] = 0;
    plVar4[0x47] = 0;
    plVar4[0x46] = 0;
    plVar4[0x45] = 0;
    plVar4[0x8b] = 0;
    plVar4[0x8a] = 0;
    plVar4[0x89] = 0;
    plVar4[0x88] = 0;
    plVar4[0x7b] = 0;
    plVar4[0x7a] = 0;
    plVar4[0x79] = 0;
    plVar4[0x78] = 0;
    plVar4[0x77] = 0;
    plVar4[0xbd] = 0;
    plVar4[0xbc] = 0;
    plVar4[0xbb] = 0;
    plVar4[0xba] = 0;
    plVar4[0xad] = 0;
    plVar4[0xac] = 0;
    plVar4[0xab] = 0;
    plVar4[0xaa] = 0;
    plVar4[0xa9] = 0;
    plVar4[0xef] = 0;
    plVar4[0xee] = 0;
    plVar4[0xed] = 0;
    plVar4[0xec] = 0;
    plVar4[0xdf] = 0;
    plVar4[0xde] = 0;
    plVar4[0xdd] = 0;
    plVar4[0xdc] = 0;
    plVar4[0xdb] = 0;
    plVar4[0x121] = 0;
    plVar4[0x120] = 0;
    plVar4[0x11f] = 0;
    plVar4[0x11e] = 0;
    plVar4[0x111] = 0;
    plVar4[0x110] = 0;
    plVar4[0x10f] = 0;
    plVar4[0x10e] = 0;
    plVar4[0x10d] = 0;
    plVar4[0x153] = 0;
    plVar4[0x152] = 0;
    plVar4[0x151] = 0;
    plVar4[0x150] = 0;
    plVar4[0x143] = 0;
    plVar4[0x142] = 0;
    plVar4[0x141] = 0;
    plVar4[0x140] = 0;
    plVar4[0x13f] = 0;
    plVar4[0x185] = 0;
    plVar4[0x184] = 0;
    plVar4[0x183] = 0;
    plVar4[0x182] = 0;
    plVar4[0x175] = 0;
    plVar4[0x174] = 0;
    plVar4[0x173] = 0;
    plVar4[0x172] = 0;
    plVar4[0x171] = 0;
    *(undefined4 *)(plVar4 + 0x192) = 0;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
    lVar3 = *(long *)(param_1 + 0x98);
    *(long **)(param_1 + 0x98) = plVar4;
    if (lVar3 != 0) {
      FUN_00ff6d20((undefined8 *)(param_1 + 0xa0));
    }
    *(undefined8 *)(param_1 + 0xa8) = 0xca0;
    *(undefined8 *)(param_1 + 0xb0) = 0x10;
    *(undefined8 *)(param_1 + 0xa0) = plVar2;
    if (*(long *)(param_1 + 0x548) != 0) {
      *(undefined8 *)(*(long *)(param_1 + 0x548) + 0xa8) = *(undefined8 *)(param_1 + 0x98);
    }
  }
  return *(undefined8 *)(param_1 + 0x98);
}


