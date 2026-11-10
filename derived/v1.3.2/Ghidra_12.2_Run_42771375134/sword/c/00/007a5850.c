/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007a5850; name: FUN_007a5850
 */


long FUN_007a5850(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  
  puVar2 = PTR_DAT_027166b0;
  if (*(long *)PTR_DAT_027166b0 != 0) {
    return *(long *)PTR_DAT_027166b0;
  }
  if ((DAT_029f4c7b & 1) == 0) {
    DAT_029f4c7b = 1;
    FUN_00800890(3000000,3000000,
                 "C:/jenkins/workspace/rigel/rom/RomBuild/program/lib/gflnet3/src/p2p/framework/protocol_buffers/out/data/request_cancel_all.pb.cc"
                );
    FUN_007e26f0(&DAT_01d004cd,0x65);
    FUN_00818650("request_cancel_all.proto",&LAB_007a5610);
    plVar3 = operator_new(0x20);
    puVar1 = PTR_DAT_027166a8;
    *(undefined8 *)((long)plVar3 + 0x14) = 0;
    *(long **)puVar2 = plVar3;
    *(undefined1 *)(plVar3 + 2) = 1;
    *plVar3 = (long)(puVar1 + 0x10);
    plVar3[1] = 0;
    FUN_008010b0(PTR_LAB_027166b8);
    return *(long *)puVar2;
  }
  return 0;
}


