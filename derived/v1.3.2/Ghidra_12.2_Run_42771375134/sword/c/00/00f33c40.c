/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f33c40; name: FUN_00f33c40
 */


undefined8 * FUN_00f33c40(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  byte *pbVar3;
  byte *pbVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong local_58;
  undefined1 auStack_50 [8];
  ulong *local_48;
  
  uVar5 = *(ulong *)(param_2 + 0x10);
  local_58 = 0xcbf29ce484222645;
  if (uVar5 != 0) {
    pbVar3 = *(byte **)(param_2 + 8);
    if (uVar5 != 1) {
      lVar6 = (uVar5 & 1) - uVar5;
      pbVar4 = pbVar3;
      do {
        pbVar3 = pbVar4 + 2;
        local_58 = ((local_58 ^ *pbVar4) * 0x100000001b3 ^ (ulong)pbVar4[1]) * 0x100000001b3;
        lVar6 = lVar6 + 2;
        pbVar4 = pbVar3;
      } while (lVar6 != 0);
    }
    if ((uVar5 & 1) != 0) {
      local_58 = (local_58 ^ *pbVar3) * 0x100000001b3;
    }
  }
  plVar2 = (long *)param_1[8];
  do {
    if (plVar2 == (long *)0x0) {
      plVar2 = (long *)*param_1;
      puVar1 = (undefined8 *)(**(code **)(*plVar2 + 0x10))(plVar2,0x30,0x10);
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
      if (0xf < *(ulong *)(lVar6 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = plVar2;
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
      *puVar1 = *param_1;
      *(undefined4 *)(puVar1 + 1) = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      FUN_0010d170(puVar1 + 4,*(undefined8 *)(param_2 + 8));
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
      local_48 = &local_58;
      lVar6 = FUN_00f34270(param_1 + 7,&local_58,&DAT_02161c1c,&local_48,auStack_50);
      lVar7 = *(long *)(lVar6 + 0x28);
      *(undefined8 **)(lVar6 + 0x28) = puVar1;
      if (lVar7 != 0) {
        if (*(long *)(lVar7 + 0x20) != 0) {
          (**(code **)(*(long *)(*(long *)(lVar7 + 0x20) + 0x48) + 0x18))();
          *(undefined8 *)(lVar7 + 0x20) = 0;
        }
        (**(code **)(**(long **)(lVar6 + 0x30) + 0x18))
                  (*(long **)(lVar6 + 0x30),lVar7,*(undefined8 *)(lVar6 + 0x38),
                   *(undefined8 *)(lVar6 + 0x40));
      }
      *(long **)(lVar6 + 0x30) = plVar2;
      *(undefined8 *)(lVar6 + 0x38) = 0x30;
      *(undefined8 *)(lVar6 + 0x40) = 0x10;
      return puVar1;
    }
    if ((ulong)plVar2[4] <= local_58) {
      if (local_58 <= (ulong)plVar2[4]) {
        return (undefined8 *)0x0;
      }
      plVar2 = plVar2 + 1;
    }
    plVar2 = (long *)*plVar2;
  } while( true );
}


