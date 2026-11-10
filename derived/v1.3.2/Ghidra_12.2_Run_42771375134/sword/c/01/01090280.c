/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01090280; name: FUN_01090280
 */


void FUN_01090280(undefined8 *param_1,uint param_2)

{
  undefined2 *puVar1;
  undefined *puVar2;
  long lVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined2 local_44 [2];
  
  param_1[1] = *param_1;
  FUN_01090450(param_1,param_2);
  puVar2 = PTR_DAT_02710860;
  if (param_2 != 0) {
    uVar4 = 0;
    do {
      while( true ) {
        local_44[0] = (undefined2)uVar4;
        puVar1 = (undefined2 *)param_1[1];
        if ((undefined2 *)param_1[2] <= puVar1) break;
        uVar5 = param_1[3];
        lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
        if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(undefined8 *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = uVar5;
        *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
        *puVar1 = local_44[0];
        *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
        param_1[1] = param_1[1] + 2;
        uVar4 = uVar4 + 1;
        if (param_2 <= uVar4) {
          return;
        }
      }
      FUN_010906d0(param_1,local_44);
      uVar4 = uVar4 + 1;
    } while (uVar4 < param_2);
  }
  return;
}


