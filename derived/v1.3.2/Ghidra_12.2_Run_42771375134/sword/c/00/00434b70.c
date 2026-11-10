/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00434b70; name: FUN_00434b70
 */


undefined4 FUN_00434b70(undefined1 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  void *pvVar3;
  undefined4 uVar4;
  ulong uVar5;
  
  *param_1 = 0;
  puVar1 = PTR_DAT_02712e50;
  pvVar3 = (void *)FUN_007749e0(*(undefined8 *)(PTR_DAT_02712e50 + 8),0x1000);
  puVar2 = PTR_DAT_02712e98;
  uVar5 = *(ulong *)(puVar1 + 8);
  *(void **)(PTR_DAT_02712e98 + 0x1c0) = pvVar3;
  *(int *)(puVar2 + 0x1c8) = (int)uVar5;
  nn::os::CreateThread
            ((ThreadType *)puVar2,(_func_void_void_ptr *)PTR_LAB_02712eb0,param_1,pvVar3,
             uVar5 & 0xffffffff,*(int *)puVar1);
  nn::os::SetThreadName((ThreadType *)puVar2,"AK::EventManager");
  nn::os::SetThreadCoreMask((ThreadType *)puVar2,*(int *)(puVar1 + 0x10),*(ulong *)(puVar1 + 0x18));
  nn::os::StartThread((ThreadType *)puVar2);
  uVar4 = 1;
  if (puVar2[0x40] == '\0') {
    uVar4 = 2;
  }
  return uVar4;
}


