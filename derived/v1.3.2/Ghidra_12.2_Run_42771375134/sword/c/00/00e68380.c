/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e68380; name: FUN_00e68380
 */


void FUN_00e68380(long *param_1)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 local_28;
  
  lVar2 = FUN_00df1bc0(*(undefined8 *)PTR_DAT_027194d8,&local_28);
  if ((lVar2 != 0) && ((char)param_1[0xb2] != '\0')) {
    *(undefined1 *)(param_1 + 0xb2) = 0;
    (**(code **)(*param_1 + 0x1d8))(param_1);
    if (*(int *)((long)param_1 + 0x594) == 0) {
      local_28 = 0x94fa893c690bf301;
    }
    else {
      local_28 = 0x34eec1b43f2f6305;
    }
    FUN_00dc0720(param_1,&local_28);
    FUN_00e681f0(*(undefined4 *)PTR_DAT_0271fd20,lVar2,PTR_DAT_02715088,0x122);
    if ((param_1[0x52] != 0) && (lVar2 = *(long *)(param_1[0x52] + 0x80), lVar2 != 0)) {
      plVar5 = (long *)(lVar2 + 0x48);
      (**(code **)(*plVar5 + 0x10))(plVar5);
      if (*(int *)(lVar2 + 0x54) != 0) {
        puVar6 = *(undefined8 **)(lVar2 + 0x60);
        plVar3 = (long *)(**(code **)*puVar6)(puVar6);
        if (((*PTR_DAT_02715290 & 1) == 0) &&
           (iVar1 = __cxa_guard_acquire(PTR_DAT_02715290), iVar1 != 0)) {
          uVar4 = FUN_01590a70();
          *(undefined8 *)PTR_DAT_02715298 = uVar4;
          __cxa_guard_release(PTR_DAT_02715290);
        }
        for (; plVar3 != (long *)PTR_DAT_02715298; plVar3 = (long *)*plVar3) {
        }
        *(undefined1 *)(puVar6 + 2) = 1;
      }
      (**(code **)(*plVar5 + 0x18))(plVar5);
    }
  }
  return;
}


