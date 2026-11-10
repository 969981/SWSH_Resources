/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011b1d70; name: _INIT_1404
 */


void _INIT_1404(void)

{
  undefined *puVar1;
  long *plVar2;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined1 uStack_28;
  
  if ((DAT_02a64b58 & 1) == 0) {
    DAT_02a64b58 = 1;
    FUN_00800890(3000000,3000000,
                 "C:/jenkins/workspace/rigel/rom/RomBuild/program/prog/network/net_contents/source/battle/nbr/protocol_buffers/out/data/bgm.pb.cc"
                );
    FUN_007e26f0(&DAT_01d30ed8,0x60);
    FUN_00818650("bgm.proto",&LAB_011b1290);
    plVar2 = operator_new(0x28);
    *plVar2 = (long)(PTR_DAT_02725598 + 0x10);
    plVar2[1] = 0;
    puVar1 = PTR_DAT_02716d70;
    *(undefined1 *)(plVar2 + 2) = 0;
    if (*(long *)puVar1 != 2) {
      uStack_28 = 0;
      puStack_38 = PTR_DAT_02716670 + 0x10;
      puStack_30 = PTR_LAB_02716d78;
      FUN_00801c10(PTR_DAT_02716d70,&puStack_38);
      FUN_00801390(&puStack_38);
    }
    plVar2[4] = 0;
    puVar1 = PTR_DAT_02725590;
    plVar2[3] = *(long *)PTR_DAT_02716d10;
    *(long **)puVar1 = plVar2;
    *(undefined1 *)(plVar2 + 2) = 1;
    FUN_008010b0(PTR_LAB_027255a0);
  }
  return;
}


