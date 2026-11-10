/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0047bfa0; name: FUN_0047bfa0
 */


undefined8 FUN_0047bfa0(void)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  void *pvVar5;
  long *plVar6;
  undefined8 uVar7;
  ulong uVar8;
  
  puVar4 = PTR_DAT_02712ed0;
  puVar3 = PTR_DAT_02712ec8;
  *PTR_DAT_02713218 = 0;
  *puVar3 = 0;
  *puVar4 = 1;
  *(undefined4 *)PTR_DAT_02713220 = 0;
  nn::os::InitializeEvent(PTR_DAT_02713228,0,1);
  iVar1 = *(int *)PTR_DAT_02712e50;
  iVar2 = *(int *)(PTR_DAT_02712e50 + 0x10);
  uVar8 = *(ulong *)(PTR_DAT_02712e50 + 0x18);
  pvVar5 = (void *)FUN_007749e0(0x4000,0x1000);
  puVar3 = PTR_DAT_02713230;
  *(void **)(PTR_DAT_02713230 + 0x1c0) = pvVar5;
  *(undefined4 *)(puVar3 + 0x1c8) = 0x4000;
  nn::os::CreateThread
            ((ThreadType *)puVar3,(_func_void_void_ptr *)PTR_LAB_02713238,(void *)0x0,pvVar5,0x4000,
             iVar1);
  nn::os::SetThreadName((ThreadType *)puVar3,"AK Suspended");
  nn::os::SetThreadCoreMask((ThreadType *)puVar3,iVar2,uVar8);
  nn::os::StartThread((ThreadType *)puVar3);
  if (puVar3[0x40] == '\0') {
    uVar7 = 2;
  }
  else {
    FUN_0047c380(1,0);
    plVar6 = (long *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,0x128);
    puVar3 = PTR_DAT_027131f0;
    if (plVar6 != (long *)0x0) {
      plVar6[5] = 0;
      plVar6[6] = 0;
      *(undefined4 *)(plVar6 + 7) = 1;
      *(undefined4 *)(plVar6 + 0x18) = 0;
      plVar6[2] = 0;
      *(undefined4 *)(plVar6 + 0x17) = 0;
      plVar6[0x15] = 0;
      plVar6[0x16] = 0;
      plVar6[0x14] = 0;
      *plVar6 = (long)(puVar3 + 0x10);
                    /* WARNING: Subroutine does not return */
      memset((void *)((long)plVar6 + 0x3c),0,0x5c);
    }
    uVar7 = 0x34;
  }
  return uVar7;
}


