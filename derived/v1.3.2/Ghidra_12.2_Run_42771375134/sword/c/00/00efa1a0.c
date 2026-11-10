/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00efa1a0; name: FUN_00efa1a0
 */


/* WARNING: Heritage AFTER dead removal. Example location: r0x00000090 : 0x00efa264 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_00efa1a0(long param_1,uint param_2)

{
  undefined1 uVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long local_38;
  
  lVar7 = *(long *)(*(long *)PTR_DAT_02710848 + 0x68);
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  FUN_00ed9a40(&local_38,lVar7);
  uVar6 = 1;
  if ((param_2 & 1) == 0) {
    uVar6 = 2;
  }
  uVar1 = *(undefined1 *)(param_1 + 0x124);
  if ((local_38 != 0) && (puVar8 = *(undefined8 **)(local_38 + 0x60), puVar8 != (undefined8 *)0x0))
  {
    plVar3 = (long *)(**(code **)*puVar8)(puVar8);
    if (((*PTR_DAT_02720438 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_02720438), iVar2 != 0)) {
      uVar5 = FUN_0156a3b0();
      *(undefined8 *)PTR_DAT_02720440 = uVar5;
      __cxa_guard_release(PTR_DAT_02720438);
    }
    for (; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
      if (plVar3 == (long *)PTR_DAT_02720440) {
        puVar9 = puVar8 + -10;
        lVar4 = puVar8[8];
        *(undefined4 *)(puVar8 + 7) = uVar6;
        puVar8[8] = 0;
        goto joined_r0x00efa2d4;
      }
    }
  }
  puVar9 = (undefined8 *)0x0;
  lVar4 = _DAT_00000090;
  _DAT_00000088 = uVar6;
  _DAT_00000090 = 0;
joined_r0x00efa2d4:
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))();
  }
  *(undefined1 *)(puVar9 + 0x13) = uVar1;
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
  }
  return;
}


