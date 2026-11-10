/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0136afb0; name: FUN_0136afb0
 */


void FUN_0136afb0(long *param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined2 local_34;
  undefined1 local_32;
  
  param_1[7] = 0;
  puVar1 = PTR_DAT_02710a18;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[2] = 0;
  param_1[3] = 0;
  puVar1 = PTR_DAT_02710860;
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if ((lVar3 == 0) || (*(long *)(lVar3 + 0x80) == 0)) {
    plVar5 = (long *)0x0;
  }
  else {
    plVar5 = *(long **)(lVar3 + *(long *)(lVar3 + 0x80) * 8 + -8);
  }
  *(undefined4 *)(param_1 + 10) = 0;
  puVar2 = PTR_DAT_02728960;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[9] = (long)(puVar2 + 0x48);
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0xb] = 0;
  *param_1 = (long)(puVar2 + 0x10);
  param_1[1] = (long)plVar5;
  *(undefined1 *)((long)param_1 + 0x114) = 0xff;
  param_1[0x23] = 0;
  *(undefined1 *)((long)param_1 + 300) = 0xff;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined1 *)((long)param_1 + 0xfc) = 0xff;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(undefined1 *)((long)param_1 + 0xe4) = 0xff;
  param_1[0x1d] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined1 *)((long)param_1 + 0xcc) = 0xff;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined1 *)((long)param_1 + 0xb4) = 0xff;
  param_1[0x17] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined1 *)((long)param_1 + 0x9c) = 0xff;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined1 *)((long)param_1 + 0x84) = 0xff;
  param_1[0x11] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined1 *)((long)param_1 + 0x6c) = 0xff;
  lVar3 = *param_2;
  param_1[0x26] = lVar3;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    plVar5 = (long *)param_1[1];
  }
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
  if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = plVar5;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  lVar4 = (**(code **)(*plVar5 + 0x10))(plVar5,0x170,0x10);
  if (lVar4 == 0) {
    (**(code **)(*plVar5 + 0xb8))(plVar5);
  }
  FUN_0136c720(lVar4,plVar5);
  *(long **)(lVar4 + 8) = plVar5;
  *(long *)(lVar4 + 0x10) = lVar4;
  *(undefined8 *)(lVar4 + 0x18) = 0x170;
  *(undefined8 *)(lVar4 + 0x20) = 0x10;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  param_1[0x27] = lVar4;
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))((long *)(lVar4 + 0x48));
  }
  lVar3 = param_1[0xb];
  *(undefined1 *)(param_1 + 0x28) = 0;
  param_1[0xb] = 0;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined1 *)((long)param_1 + 100) = 0;
  lVar3 = param_1[0xe];
  *(undefined4 *)(param_1 + 0xd) = 0;
  *(undefined1 *)((long)param_1 + 0x67) = local_32;
  *(undefined2 *)((long)param_1 + 0x65) = local_34;
  *(undefined1 *)((long)param_1 + 0x6c) = 0xff;
  param_1[0xe] = 0;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
  }
  *(undefined4 *)(param_1 + 0xf) = 0;
  *(undefined1 *)((long)param_1 + 0x7c) = 0;
  lVar3 = param_1[0x11];
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined1 *)((long)param_1 + 0x7f) = local_32;
  *(undefined2 *)((long)param_1 + 0x7d) = local_34;
  *(undefined1 *)((long)param_1 + 0x84) = 0xff;
  param_1[0x11] = 0;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
  }
  *(undefined4 *)(param_1 + 0x12) = 0;
  *(undefined1 *)((long)param_1 + 0x94) = 0;
  lVar3 = param_1[0x14];
  *(undefined4 *)(param_1 + 0x13) = 0;
  *(undefined1 *)((long)param_1 + 0x97) = local_32;
  *(undefined2 *)((long)param_1 + 0x95) = local_34;
  *(undefined1 *)((long)param_1 + 0x9c) = 0xff;
  param_1[0x14] = 0;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
  }
  *(undefined4 *)(param_1 + 0x15) = 0;
  *(undefined1 *)((long)param_1 + 0xac) = 0;
  lVar3 = param_1[0x17];
  *(undefined4 *)(param_1 + 0x16) = 0;
  *(undefined1 *)((long)param_1 + 0xaf) = local_32;
  *(undefined2 *)((long)param_1 + 0xad) = local_34;
  *(undefined1 *)((long)param_1 + 0xb4) = 0xff;
  param_1[0x17] = 0;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined1 *)((long)param_1 + 0xc4) = 0;
  lVar3 = param_1[0x1a];
  *(undefined4 *)(param_1 + 0x19) = 0;
  *(undefined1 *)((long)param_1 + 199) = local_32;
  *(undefined2 *)((long)param_1 + 0xc5) = local_34;
  *(undefined1 *)((long)param_1 + 0xcc) = 0xff;
  param_1[0x1a] = 0;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
  }
  *(undefined4 *)(param_1 + 0x1b) = 0;
  *(undefined1 *)((long)param_1 + 0xdc) = 0;
  lVar3 = param_1[0x1d];
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined1 *)((long)param_1 + 0xdf) = local_32;
  *(undefined2 *)((long)param_1 + 0xdd) = local_34;
  *(undefined1 *)((long)param_1 + 0xe4) = 0xff;
  param_1[0x1d] = 0;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
  }
  *(undefined4 *)(param_1 + 0x1e) = 0;
  *(undefined1 *)((long)param_1 + 0xf4) = 0;
  lVar3 = param_1[0x20];
  *(undefined4 *)(param_1 + 0x1f) = 0;
  *(undefined1 *)((long)param_1 + 0xf7) = local_32;
  *(undefined2 *)((long)param_1 + 0xf5) = local_34;
  *(undefined1 *)((long)param_1 + 0xfc) = 0xff;
  param_1[0x20] = 0;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
  }
  *(undefined4 *)(param_1 + 0x21) = 0;
  *(undefined1 *)((long)param_1 + 0x10c) = 0;
  *(undefined2 *)((long)param_1 + 0x10d) = local_34;
  lVar3 = param_1[0x23];
  *(undefined1 *)((long)param_1 + 0x10f) = local_32;
  *(undefined4 *)(param_1 + 0x22) = 0;
  *(undefined1 *)((long)param_1 + 0x114) = 0xff;
  param_1[0x23] = 0;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
  }
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined1 *)((long)param_1 + 0x124) = 0;
  *(undefined2 *)((long)param_1 + 0x125) = local_34;
  *(undefined1 *)((long)param_1 + 0x127) = local_32;
  *(undefined4 *)(param_1 + 0x25) = 0;
  *(undefined1 *)((long)param_1 + 300) = 0xff;
  return;
}


