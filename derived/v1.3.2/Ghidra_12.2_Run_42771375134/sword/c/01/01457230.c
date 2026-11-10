/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01457230; name: FUN_01457230
 */


void FUN_01457230(undefined8 param_1,long *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 local_48;
  undefined8 local_38;
  
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = param_2;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
  plVar3 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x450,0x10);
  if (plVar3 == (long *)0x0) {
    (**(code **)(*param_2 + 0xb8))(param_2);
  }
  local_38 = *param_3;
  *param_3 = 0;
  local_48 = *param_4;
  *param_4 = 0;
  FUN_00ff5fc0(plVar3,&local_38,&local_48);
  plVar3[0x24] = 0;
  plVar3[0x25] = 0;
  *(undefined4 *)(plVar3 + 0xf) = 6;
  plVar3[0x22] = 0;
  plVar3[0x23] = 0;
  *(undefined4 *)((long)plVar3 + 0xac) = 0;
  *(undefined8 *)((long)plVar3 + 0xa4) = 0;
  *(undefined8 *)((long)plVar3 + 0x9c) = 0;
  *(undefined8 *)((long)plVar3 + 0x94) = 0;
  *(undefined8 *)((long)plVar3 + 0x8c) = 0;
  *(undefined8 *)((long)plVar3 + 0x84) = 0;
  *(undefined8 *)((long)plVar3 + 0x7c) = 0;
  puVar1 = PTR_DAT_02729e48;
  *plVar3 = (long)(PTR_DAT_02729e48 + 0x10);
  *(undefined4 *)(plVar3 + 0x32) = 0;
  *(undefined4 *)(plVar3 + 0x38) = 0;
  *(undefined1 *)((long)plVar3 + 0x1c4) = 0;
  *(undefined4 *)(plVar3 + 0x39) = 0;
  *(undefined1 *)((long)plVar3 + 0x1cc) = 0;
  *(undefined4 *)(plVar3 + 0x3a) = 0;
  *(undefined1 *)((long)plVar3 + 0x1d4) = 0;
  *(undefined4 *)(plVar3 + 0x3b) = 0;
  *(undefined1 *)((long)plVar3 + 0x1dc) = 0;
  *(undefined4 *)(plVar3 + 0x3c) = 0;
  *(undefined1 *)((long)plVar3 + 0x1e4) = 0;
  *(undefined4 *)(plVar3 + 0x3d) = 0;
  *(undefined1 *)((long)plVar3 + 0x1ec) = 0;
  *(undefined4 *)(plVar3 + 0x3e) = 0;
  *(undefined1 *)((long)plVar3 + 500) = 0;
  *(undefined4 *)(plVar3 + 0x3f) = 0;
  *(undefined1 *)((long)plVar3 + 0x1fc) = 0;
  *(undefined4 *)(plVar3 + 0x40) = 0;
  *(undefined1 *)((long)plVar3 + 0x204) = 0;
  *(undefined4 *)(plVar3 + 0x41) = 0;
  *(undefined1 *)((long)plVar3 + 0x20c) = 0;
  *(undefined4 *)(plVar3 + 0x42) = 0;
  *(undefined1 *)((long)plVar3 + 0x214) = 0;
  *(undefined4 *)(plVar3 + 0x43) = 0;
  *(undefined1 *)((long)plVar3 + 0x21c) = 0;
  *(undefined4 *)(plVar3 + 0x44) = 0;
  *(undefined1 *)((long)plVar3 + 0x224) = 0;
  *(undefined4 *)(plVar3 + 0x45) = 0;
  *(undefined1 *)((long)plVar3 + 0x22c) = 0;
  *(undefined4 *)(plVar3 + 0x46) = 0;
  *(undefined1 *)((long)plVar3 + 0x234) = 0;
  *(undefined4 *)(plVar3 + 0x47) = 0;
  *(undefined1 *)((long)plVar3 + 0x23c) = 0;
  *(undefined4 *)(plVar3 + 0x48) = 0;
  *(undefined1 *)((long)plVar3 + 0x244) = 0;
  *(undefined4 *)(plVar3 + 0x49) = 0;
  *(undefined1 *)((long)plVar3 + 0x24c) = 0;
  *(undefined4 *)(plVar3 + 0x4a) = 0;
  *(undefined1 *)((long)plVar3 + 0x254) = 0;
  *(undefined4 *)(plVar3 + 0x4b) = 0;
  *(undefined1 *)((long)plVar3 + 0x25c) = 0;
  *(undefined4 *)(plVar3 + 0x4c) = 0;
  *(undefined1 *)((long)plVar3 + 0x264) = 0;
  *(undefined4 *)(plVar3 + 0x4d) = 0;
  *(undefined1 *)((long)plVar3 + 0x26c) = 0;
  *(undefined4 *)(plVar3 + 0x4e) = 0;
  *(undefined1 *)((long)plVar3 + 0x274) = 0;
  *(undefined4 *)(plVar3 + 0x4f) = 0;
  *(undefined1 *)((long)plVar3 + 0x27c) = 0;
  *(undefined4 *)(plVar3 + 0x50) = 0;
  *(undefined1 *)((long)plVar3 + 0x284) = 0;
  *(undefined4 *)(plVar3 + 0x51) = 0;
  *(undefined1 *)((long)plVar3 + 0x28c) = 0;
  *(undefined4 *)(plVar3 + 0x52) = 0;
  *(undefined1 *)((long)plVar3 + 0x294) = 0;
  *(undefined4 *)(plVar3 + 0x53) = 0;
  *(undefined1 *)((long)plVar3 + 0x29c) = 0;
  *(undefined4 *)(plVar3 + 0x54) = 0;
  *(undefined1 *)((long)plVar3 + 0x2a4) = 0;
  plVar3[9] = (long)(puVar1 + 0x78);
  plVar3[10] = (long)(puVar1 + 0xb8);
  *(undefined4 *)((long)plVar3 + 0x436) = 0;
                    /* WARNING: Subroutine does not return */
  memset(plVar3 + 0x55,0,0x174);
}


