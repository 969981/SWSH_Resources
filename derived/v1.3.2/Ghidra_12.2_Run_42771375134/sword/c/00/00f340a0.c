/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f340a0; name: FUN_00f340a0
 */


undefined8 * FUN_00f340a0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  ulong local_58;
  undefined1 auStack_50 [8];
  ulong *local_48;
  
  local_58 = FUN_00f34720(param_2,param_3);
  plVar4 = (long *)param_1[0x14];
  do {
    if (plVar4 == (long *)0x0) {
      plVar4 = (long *)*param_1;
      puVar1 = (undefined8 *)(**(code **)(*plVar4 + 0x10))(plVar4,0x80,8);
      lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
      if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long **)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = plVar4;
      *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
      uVar5 = *param_1;
      *puVar1 = param_2;
      puVar1[1] = param_3;
      puVar1[6] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      *(undefined4 *)(puVar1 + 7) = 0;
      puVar1[4] = 0;
      puVar1[5] = uVar5;
      puVar1[0xc] = 0;
      *(undefined4 *)(puVar1 + 0xd) = 0;
      puVar1[0xe] = 0;
      *(undefined4 *)(puVar1 + 0xf) = 0;
      puVar1[8] = 0;
      puVar1[9] = 0;
      puVar1[10] = 0;
      puVar1[0xb] = uVar5;
      *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
      local_48 = &local_58;
      lVar2 = FUN_00f34830(param_1 + 0x13,&local_58,&DAT_02161c1c,&local_48,auStack_50);
      lVar6 = *(long *)(lVar2 + 0x28);
      *(undefined8 **)(lVar2 + 0x28) = puVar1;
      if (lVar6 != 0) {
        lVar3 = *(long *)(lVar6 + 0x40);
        if (lVar3 != 0) {
          *(long *)(lVar6 + 0x48) = lVar3;
          (**(code **)(**(long **)(lVar6 + 0x58) + 0x18))
                    (*(long **)(lVar6 + 0x58),lVar3,*(long *)(lVar6 + 0x50) - lVar3,8);
        }
        lVar3 = *(long *)(lVar6 + 0x10);
        if (lVar3 != 0) {
          *(long *)(lVar6 + 0x18) = lVar3;
          (**(code **)(**(long **)(lVar6 + 0x28) + 0x18))
                    (*(long **)(lVar6 + 0x28),lVar3,*(long *)(lVar6 + 0x20) - lVar3,8);
        }
        (**(code **)(**(long **)(lVar2 + 0x30) + 0x18))
                  (*(long **)(lVar2 + 0x30),lVar6,*(undefined8 *)(lVar2 + 0x38),
                   *(undefined8 *)(lVar2 + 0x40));
      }
      *(long **)(lVar2 + 0x30) = plVar4;
      *(undefined8 *)(lVar2 + 0x38) = 0x80;
      *(undefined8 *)(lVar2 + 0x40) = 8;
      return puVar1;
    }
    if ((ulong)plVar4[4] <= local_58) {
      if (local_58 <= (ulong)plVar4[4]) {
        return (undefined8 *)0x0;
      }
      plVar4 = plVar4 + 1;
    }
    plVar4 = (long *)*plVar4;
  } while( true );
}


