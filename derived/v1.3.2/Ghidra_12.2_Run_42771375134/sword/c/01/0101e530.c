/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0101e530; name: FUN_0101e530
 */


void FUN_0101e530(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  
  *(undefined8 *)(param_1 + 0x47f0) = param_2;
  nn::hid::InitializeNpad();
  *(undefined1 **)(param_1 + 0xf0) = &LAB_0101e680;
  *(undefined1 **)(param_1 + 0xf8) = &LAB_0101e690;
  FUN_0101e6d0(param_1 + 0x70,0,*(undefined8 *)(param_1 + 0x47f0));
  FUN_0101e810(param_1 + 0x70,1,*(undefined8 *)(param_1 + 0x47f0));
  plVar4 = *(long **)(param_1 + 0x47f0);
  plVar2 = (long *)(**(code **)(*plVar4 + 0x10))(plVar4,0x40,8);
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = plVar4;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  puVar1 = PTR_DAT_027236a8;
  plVar2[6] = 0;
  plVar2[7] = 0;
  plVar2[4] = 0;
  plVar2[5] = 0;
  plVar2[2] = 0;
  plVar2[3] = 0;
  *plVar2 = (long)(puVar1 + 0x10);
  plVar2[1] = 0;
  *(undefined4 *)(plVar2 + 1) = 0x20;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  puVar5 = *(undefined8 **)(param_1 + 0x370);
  *(long **)(param_1 + 0x370) = plVar2;
  if (puVar5 != (undefined8 *)0x0) {
    (**(code **)*puVar5)(puVar5);
    (**(code **)(**(long **)(param_1 + 0x378) + 0x18))
              (*(long **)(param_1 + 0x378),puVar5,*(undefined8 *)(param_1 + 0x380),
               *(undefined8 *)(param_1 + 0x388));
  }
  *(undefined8 *)(param_1 + 0x380) = 0x40;
  *(long **)(param_1 + 0x378) = plVar4;
  *(undefined8 *)(param_1 + 0x388) = 8;
  FUN_01023ee0(param_1 + 0x390,param_2);
  FUN_0101e950(param_1);
  return;
}


