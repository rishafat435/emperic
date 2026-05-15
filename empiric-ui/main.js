document.getElementById('ping-btn').addEventListener('click', async () => {
    const output = document.getElementById('output');
    
    const { Command } = window.__TAURI__.shell;
    const command = Command.sidecar('binaries/empiric-core');
    const child = await command.spawn();
    
    command.stdout.on('data', (data) => {
        output.textContent += data;
    });
    
    await child.write('hello\n');
});